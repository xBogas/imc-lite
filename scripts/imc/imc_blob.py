# -*- coding: utf-8 -*-
############################################################################
# Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: Ricardo Martins                                                  #
# Modified: João Bogas                                                     #
############################################################################
# This script will convert the IMC.xml definition to a stripped and        #
# compressed C++ array.                                                    #
############################################################################

import sys
import os.path

from utils.utils import *
from utils.file import *
from utils.code import *

HPP = 'Blob.h'
CXX = 'Blob.cpp'

# Parse command line arguments.
import argparse
parser = argparse.ArgumentParser(
    description="Strip, compress and generate IMC.xml blob.")
parser.add_argument('dest_folder_hpp', metavar='DEST_FOLDER_HPP',
                    help="destination folder")
parser.add_argument('dest_folder_cpp', metavar='DEST_FOLDER_CPP',
                    help="destination folder")
parser.add_argument('-x', '--xml', metavar='IMC_XML',
                    help="IMC XML file")
parser.add_argument('-f', '--force', action='store_true', required=False,
                    help="Force creation of blob file")
args = parser.parse_args()

xml_md5 = compute_md5(args.xml);
dest_folder_hpp = args.dest_folder_hpp
dest_folder_cpp = args.dest_folder_cpp

check_dir(dest_folder_hpp)
check_dir(dest_folder_cpp)

cpp, hpp = False, False
if not args.force:
    if file_md5_matches(os.path.join(dest_folder_cpp, CXX), xml_md5):
        print('* ' + os.path.join(dest_folder_cpp, CXX) + ' [Skipped]')
        cpp = True
    if file_md5_matches(os.path.join(dest_folder_hpp, HPP), xml_md5):
        print('* ' + os.path.join(dest_folder_hpp, HPP) + ' [Skipped]')
        hpp = True
    if cpp and hpp :
        sys.exit(0)


# Parse XML specification.
import xml.etree.ElementTree as ET
tree = ET.parse(args.xml)

# Remove 'description' tags.
for parent in tree.iter():
    for child in parent:
        if child.tag == 'description':
            parent.remove(child)

# Create output document.
root = tree.getroot()
text = b'<?xml version="1.0" encoding="UTF-8"?>\n' + ET.tostring(root, encoding = 'utf-8')

# Compress to temporary file.
import tempfile
tmp = tempfile.NamedTemporaryFile(delete = False)
import gzip
f_out = gzip.GzipFile(tmp.name, 'wb', compresslevel = 9, mtime = 0)
f_out.write(text)
f_out.close()

################################################################################
# Blob.cpp                                                                     #
################################################################################
if not cpp:
    fd = File(CXX, dest_folder_cpp, md5 = xml_md5)
    fd.add_imc_headers(HPP)

    # Byte array.
    fd.append('static const unsigned char c_imc_blob[] = \n{')

    import binascii
    octets = []
    with open(tmp.name, 'rb') as f_gz:
        h = binascii.hexlify(f_gz.read())
        octets += ['0x' + h[i : i + 2].decode() for i in range(0, len(h), 2)]

    octets_per_line = 10

    for i in range(0, len(octets), octets_per_line):
        l = octets[i : i + octets_per_line]
        s = ','
        if i + octets_per_line >= len(octets):
            s = ''
        fd.append(', '.join(l) + s)

    fd.append('};')
    fd.append('\n')

    # getData()
    f = Function('Blob::getData', 'const unsigned char*')
    f.body('return c_imc_blob;')
    fd.append(f)

    # getSize()
    f = Function('Blob::getSize', 'unsigned int')
    f.body('return sizeof(c_imc_blob);')
    fd.append(f)

    fd.write()

################################################################################
# Blob.hpp                                                                     #
################################################################################
if not hpp:
    hpp = File(HPP, dest_folder_hpp, md5 = xml_md5)

    str = 'The IMC Blob is a byte array with the XML used to generate C++\n'
    str += '//! code. The \'description\' tags are removed and the XML document is\n'
    str += '//! compressed with Gzip'
    hpp.append(comment(str, nl = ''))
    hpp.append('class Blob');
    hpp.append('{')
    hpp.append('public:')

    hpp.append(comment('Retrieve pointer to blob data', nl = ''))
    hpp.append(comment('@return pointer to blob data', nl = ''))
    f = Function('getData', 'const unsigned char*', static=True)
    hpp.append(f.decl());

    hpp.append(comment('Retrieve size of the blob in bytes', nl = ''))
    hpp.append(comment('@return blob\'s size', nl = ''))
    f = Function('getSize', 'unsigned int' , static=True)
    hpp.append(f.decl());
    hpp.append('};')
    hpp.write()
