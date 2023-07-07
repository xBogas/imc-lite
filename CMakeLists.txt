## imported from DUNE/cmake/IMC.cmake with directory changes
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)


project(LITE)

find_program(PYTHON_EXE NAMES python3)

if(PYTHON_EXE)
  message(STATUS "IMC code generation enabled")
  set(PROGRAM_PYTHON ${PYTHON_EXE})
  if(EXISTS "${PROJECT_SOURCE_DIR}/imc/IMC.xml")
    message(STATUS "Must generate IMC files")
    set(IMC_XML           ${PROJECT_SOURCE_DIR}/imc/IMC.xml)
    set(IMC_ADDRESSES_XML ${PROJECT_SOURCE_DIR}/imc/IMC_Addresses.xml)
  else()
    message(FATAL_ERROR "Pls include IMC.xml file inside imc/")
  endif()

  set(IMC_FOLDER ${PROJECT_SOURCE_DIR}/include/IMC_GENERATED)
  set(IMC_TEST_FOLDER ${PROJECT_SOURCE_DIR}/test)
else()
  message(FATAL_ERROR "Install python")
endif(PYTHON_EXE)

macro(dune_target_imc target_name)
  add_custom_target(${target_name}
    COMMAND ${PROGRAM_PYTHON}
    ${PROJECT_SOURCE_DIR}/programs/generators/imc_code.py
    -x ${IMC_XML} ${IMC_FOLDER}

    COMMAND ${PROGRAM_PYTHON}
    ${PROJECT_SOURCE_DIR}/programs/generators/imc_blob.py
    -x ${IMC_XML} ${PROJECT_SOURCE_DIR}/include/IMC_GENERATED ${PROJECT_SOURCE_DIR}/src/IMC_GENERATED

    COMMAND ${PROGRAM_PYTHON}
    ${PROJECT_SOURCE_DIR}/programs/generators/imc_tests.py
    -x ${IMC_XML} ${IMC_TEST_FOLDER}

    COMMAND ${PROGRAM_PYTHON}
    ${PROJECT_SOURCE_DIR}/programs/generators/imc_addresses.py
    -x ${IMC_ADDRESSES_XML} ${PROJECT_SOURCE_DIR}/etc/imc-addresses.ini

    DEPENDS ${xml})
endmacro()

dune_target_imc(imc)