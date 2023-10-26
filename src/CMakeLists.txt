cmake_minimum_required(VERSION 3.0)
project(DEV_LIST)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/)

subdirs(common)
subdirs(array)
subdirs(list)
subdirs(exercices)
subdirs(stack)
subdirs(hash_table)
subdirs(file)











