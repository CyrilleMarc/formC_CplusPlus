cmake_minimum_required(VERSION 3.0)

add_executable(test_single_list test_single_list.c)
target_link_libraries(test_single_list list_lib common_lib)
set_target_properties(test_single_list PROPERTIES FOLDER "list")

add_executable(test_double_list test_double_list.c)
target_link_libraries(test_double_list list_lib common_lib)
set_target_properties(test_double_list PROPERTIES FOLDER "list")