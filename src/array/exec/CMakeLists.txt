cmake_minimum_required(VERSION 3.0)

add_executable(test_bubble_sort test_bubble_sort.c)
target_link_libraries(test_bubble_sort array_lib common_lib)
set_target_properties(test_bubble_sort PROPERTIES FOLDER "array")

add_executable(test_insertion_sort test_insertion_sort.c)
target_link_libraries(test_insertion_sort array_lib common_lib)
set_target_properties(test_insertion_sort PROPERTIES FOLDER "array")

add_executable(test_fusion_sort test_fusion_sort.c)
target_link_libraries(test_fusion_sort array_lib common_lib)
set_target_properties(test_fusion_sort PROPERTIES FOLDER "array")

add_executable(test_quick_sort test_quick_sort.c)
target_link_libraries(test_quick_sort array_lib common_lib)
set_target_properties(test_quick_sort PROPERTIES FOLDER "array")