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
	print("\033[91m" + msg + "\033[0m")
	sys.exit(1)


def warn(msg):
	"""
	Print warning message
	"""
	print("\033[93m" + msg + "\033[0m")


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

def run_script(script, xml, dir, force):
    args = ['python', script, '-x' + xml, dir]
    if force:
        args.append('--force')
    subprocess.run(args)

# lib_dir = env.get("LIBSOURCE_DIRS", [])
lib_dir = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))

clone_py = find_file('imc_download.py', lib_dir)
blob_py = find_file('imc_blob.py', lib_dir)
code_py = find_file('imc_code.py', lib_dir)


# Check if code generation is forced
try:
	force_imc = env.GetProjectOption('custom_force_imc')
	valid_params = ['True', 'true', '1']
	if force_imc in valid_params:
		force_imc = True
	else:
		force_imc = False

except:
	force_imc = False

# lib_dir = env.get("LIBSOURCE_DIRS", [])
lib_dir = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))

clone_py = find_file('imc_download.py', lib_dir)
blob_py = find_file('imc_blob.py', lib_dir)
code_py = find_file('imc_code.py', lib_dir)

# ######################### Check if IMC.xml exists #########################
proj_dir = env.get("PROJECT_DIR")
if proj_dir == None:
	proj_dir = os.getcwd() 
source_xml = search_dir('IMC.xml', proj_dir)
if source_xml == None:
	warn("IMC.xml not found! Downloading ...")
	try:
		subprocess.run(['python', clone_py, proj_dir+'/imc/'], stderr=subprocess.PIPE)
		source_xml = search_dir('IMC.xml', proj_dir)
	except:
		error("Error downloading IMC.xml")

if source_xml == None:
	error("Error downloading IMC.xml")

print("Using IMC from ", source_xml)
# ###########################################################################

run_script(blob_py, source_xml, lib_dir, force_imc)
run_script(code_py, source_xml, lib_dir, force_imc)
