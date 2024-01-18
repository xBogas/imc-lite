import os
import os.path
import sys
import subprocess
import inspect
from SCons.Script import DefaultEnvironment

env = DefaultEnvironment()

def error(msg):
	"""
	Print error message and exit
	"""
	print("\033[91m", msg)
	sys.exit(1)

def warn(msg):
	"""
	Print warning message
	"""
	print("\033[93m" + msg)


def find_file(fd, paths, err=True):
	"""
	Search for a file in a list of paths
	"""
	if not isinstance(paths, list):
		paths = [paths]

	for path in paths:
		found = search_dir(fd, path)
		if found:
			return found

	if err:
		error(fd + " not found!")


def search_dir(filename, search_path):
	"""
	Search for a file in a directory
	"""
	for root, dir, files in os.walk(search_path):
		if filename in files:
			return os.path.join(root, filename)

	return None

def check_file(dir, file_name):
	"""
	Check if a file exists in a directory
	"""
	return os.path.exists(os.path.join(dir, file_name))



# lib_dir = env.get("LIBSOURCE_DIRS", [])
lib_dir = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))

clone_py = find_file('imc_download.py', lib_dir)
blob_py = find_file('imc_blob.py', lib_dir)
code_py = find_file('imc_code.py', lib_dir)

# ######################### Check if IMC.xml exists #########################
proj_dir = env.get("PROJECT_DIR")
source_xml = search_dir('IMC.xml', proj_dir)
if source_xml == None:
	warn("IMC.xml not found! Downloading ...")
	try:
		subprocess.run(['python', clone_py, proj_dir+'/imc/'], stderr=subprocess.PIPE)
		source_xml = search_dir('IMC.xml', proj_dir)
	except:
		error('Error downloading IMC.xml')

if source_xml == None:
	error('Error downloading IMC.xml')

print("Using IMC from ", source_xml)
# ###########################################################################


# #######################  Check IMC generated files ########################
dir_hpp = os.path.join(lib_dir, 'include')
dir_cpp = os.path.join(lib_dir, 'src')

headers = ['Bitfields.h',
		   'Constants.h',
		   'Definitions.h',
		   'Enumerations.h',
		   'Factory.def',
		   'Macros.h',
		   'SuperTypes.h']

if not check_file(dir_hpp, 'Blob.h') or not check_file(dir_cpp, 'Blob.cpp'):
	print("Creating Blob files ...")
	subprocess.run(['python', 
					blob_py, 
					'-x' + source_xml,
					dir_hpp,
					dir_cpp])


for file_name in headers:
	file_path = os.path.join(dir_hpp, file_name)
	if not os.path.exists(file_path):
		print("Creating code files")
		subprocess.run(['python',
				  		code_py,
						'-x' + source_xml,
						dir_hpp,
						dir_cpp])
		break