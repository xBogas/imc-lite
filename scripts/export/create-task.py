##################################################################
# Copyright 2024 Universidade do Porto - Faculdade de Engenharia #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        #
# Departamento de Engenharia Electrotécnica e de Computadores    #
##################################################################
# Author: João Bogas                                             #
##################################################################

import sys
import os
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
        print(f'Created Task {self._name_}')


class Constructor:
    def __init__(self, name):
        self._name_ = name

    def macro(self, lines):

        macros = []
        last_macro = False

        for number, line in enumerate(lines, start=1):
            line = line.rstrip()
            has_line = line.startswith('TASK_CREATE_DECL')
            if not has_line and last_macro:
                macros.append(f'TASK_CREATE_DECL({self._name_})\n')
                last_macro = has_line
                continue

            last_macro = has_line
            if line.startswith('#undef'):
                macros.append(line)
                return '\n'.join(macros)+'\n', number

            macros.append(line)

        #return '\n'.join(macros)+'\n'

    def register(self, lines, numb):

        register = []
        for line in lines[numb:]:

            line = line.rstrip()
            if line.startswith('}'):
                register.append(f'\tcreateTask(create{self._name_}Task);')
                return '\n'.join(register)+'\n}\n'

            register.append(line)
        print('Err')

    def write(self, path):
        path = os.path.join(path,'include/Core/Factory.def')
        if not os.path.isfile(path):
            print(f'File not found {path}')
            exit(1)
        fd = open(path, 'r')
        lines = fd.readlines()

        fd = open(path, 'w')
        text, lines_read = self.macro(lines)
        fd.write(text)
        fd.write(self.register(lines, lines_read))
        fd.close()

        print('Exported constructor')

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
task.write(task_folder+args.name+'.cpp')

print(os.path.join(args.path,'include/Core/Factory.def'))

append = Constructor(args.name)
append.write(args.path)
