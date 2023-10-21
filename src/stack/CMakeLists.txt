cmake_minimum_required(VERSION 3.0)

file(GLOB list_sources *.c *.h)

#add_library(stack_lib STATIC ${list_sources})
#set_target_properties(stack_lib PROPERTIES FOLDER "stack")

subdirs(exec)
