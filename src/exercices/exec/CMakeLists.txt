cmake_minimum_required(VERSION 3.0)

add_executable(ex1_multiply_two_numbers ex1_multiply_two_numbers.c)
target_link_libraries(ex1_multiply_two_numbers common_lib)
set_target_properties(ex1_multiply_two_numbers PROPERTIES FOLDER "exercices")

add_executable(ex2_exchange_two_numbers ex2_exchange_two_numbers.c)
target_link_libraries(ex2_exchange_two_numbers common_lib)
set_target_properties(ex2_exchange_two_numbers PROPERTIES FOLDER "exercices")

