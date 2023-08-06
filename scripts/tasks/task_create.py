##################################################################
# Copyright 2023 Universidade do Porto - Faculdade de Engenharia #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        #
# Departamento de Engenharia Electrotécnica e de Computadores    #
##################################################################
# Author: João Bogas                                             #
##################################################################

import sys
import os.path
import argparse

__location__ = os.path.realpath(
    os.path.join(os.getcwd(), os.path.dirname(__file__))
    )

class Task:
    def __init__(self, author, name):
        self._author_ = author
        self._name_ = name
        self._indent_ = 0

    def header(self):
        fd = open(os.path.abspath(__file__).replace('.pyc', '.py'))
        header = []
        i = 0
        for line in fd.readlines():
            line = line.strip()
            if len(line) == 0:
                break
            elif line.startswith('# Author'):
                header.append(('// Author: ' + self._author_).ljust(len(line)) + '*')
            elif line.startswith('##'):
                header.append('// '.ljust(len(line)+1, '*'))
            else:
                line = line.replace('#', '//', 1)
                header.append(line.replace('#', '*', 1))

        return '\n'.join(header)+'\n\n'

    def body(self):
        fd = open(os.path.join(__location__, 'template.txt'))
        body = fd.read().replace('_param_task_name_', self._name_)
        fd.close()
        return '\n'+body+'\n\n'

    def write(self, path):
        if os.path.exists(path):
            print('Task name used')
            exit(1)
        f_cpp = os.path.join(path)
        fd = open(f_cpp, 'w')
        fd.write(self.header())
        fd.write(self.body())
        fd.close()



parser = argparse.ArgumentParser()

parser.add_argument('path')
parser.add_argument('author')
parser.add_argument('name')

args = parser.parse_args()

task_folder = os.path.join(args.path, 'src/Tasks/')
if os.path.isdir(task_folder) is False:
    print(f"{task_folder} doesn't contain src/Tasks directory")
    exit(1)

if args.author == '.':
    args.author = 'João Bogas'

task = Task(args.author, args.name)

task.write(task_folder+args.name+".cpp")