import os

def find_project_directory():
    # Get the current directory of the script
    current_directory = os.path.abspath(os.path.dirname(__file__))
    
    # Navigate upwards until reaching the project directory
    while True:
        # Check if we have reached the root directory
        if current_directory == os.path.dirname(current_directory):
            raise RuntimeError("Unable to find project directory.")
        
        # Check if the 'platformio.ini' file exists in the current directory
        if "platformio.ini" in os.listdir(current_directory):
            return current_directory
        
        # Move one directory up
        current_directory = os.path.dirname(current_directory)


def create_symbolic_link():
    # Get the current working directory (project directory)

    project_directory = find_project_directory()

    # Path to the scripts folder in the library
    library_scripts_folder = os.path.join(os.path.dirname(__file__), "export")

    # Path to the scripts folder in the project directory
    project_scripts_folder = os.path.join(project_directory, "scripts")

    # Create a symbolic link from the library scripts folder to the project scripts folder
    try:
        os.symlink(library_scripts_folder, project_scripts_folder)
        print("Symbolic link created successfully.")
    except Exception as e:
        print("Error creating symbolic link:", str(e))


print("Running post-installation script...")
create_symbolic_link()

