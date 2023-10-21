cmake_minimum_required(VERSION 3.0)

add_executable(test_stack test_stack.c)
target_link_libraries(test_stack list_lib common_lib)
set_target_properties(test_stack PROPERTIES FOLDER "stack")

