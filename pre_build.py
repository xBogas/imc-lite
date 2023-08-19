import os
import os.path
import subprocess

def replace_macro(file_name:str, file_dir:str) -> None :

  file_path = os.path.join(file_dir, file_name)
  print(f'task -> {file_path}')
  
  file_name = os.path.splitext(os.path.basename(file_path))[0]

  fd = open(file_path, 'r')
  lines = fd.read().replace('TASK', 'TASK_EXPORT('+file_name+')', 1)
  fd.close()
  #print(lines)
  fd = open(__file__+'/user/Tasks/'+file_name+'.cpp', 'w')
  fd.write(lines)
  fd.close()

  return

def check_file(dir:str, file_name:str) -> bool:
  return os.path.exists(os.path.join(dir, file_name))


__file__ = os.path.dirname(os.path.realpath('__file__'))

######################### Check if IMC.xml exists #########################
if os.path.exists(os.path.join(__file__, 'imc/IMC.xml')):
  print('IMC.xml exists skipping download ...')
else:
  subprocess.run(['python', 'scripts/generators/imc_download.py', 'imc/'])

###########################################################################


#######################  Check IMC generated files ########################
dir_hpp = os.path.join(__file__, 'include/IMC_GENERATED')
generated_hpp = ['Bitfields.hpp',
             'Constants.hpp',
             'Definitions.hpp',
             'Enumerations.hpp',
             'Factory.def',
             'Macros.hpp',
             'SuperTypes.hpp']

dir_cpp = os.path.join(__file__, 'src/IMC_GENERATED')

if check_file(dir_hpp, 'Blob.hpp') and check_file(dir_cpp, 'Blob.cpp'):
  print("Blob files exist skipping ...")
else:
  print("Creating Blob files ...")
  subprocess.run(['python', 
                  'scripts/generators/imc_blob.py', 
                  '-x imc/IMC.xml',
                  dir_hpp,
                  dir_cpp])
  print("Done")


for file_name in generated_hpp:
  file_path = os.path.join(dir_hpp, file_name)
  if not os.path.exists(file_path):
      print("{file_name} doesn't exist generating")
      subprocess.run(['python', 
                  'scripts/generators/imc_code.py', 
                  '-x imc/IMC.xml',
                  dir_hpp,
                  dir_cpp])
      break
print('Code files exist skipping ...')

###########################################################################

#! To complete 
#! May need to change tasks dir
if not os.path.exists('user/Tasks'):
  os.makedirs('user/Tasks')
dir_tasks = os.path.join(__file__, 'src/Tasks')
for file_name in os.listdir(dir_tasks):
  replace_macro(file_name, dir_tasks)

