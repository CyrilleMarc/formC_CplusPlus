#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_init_with_random_value_i(int** array_to_malloc, int array_element_count, int max_value)
{
    *array_to_malloc = (int*)malloc(array_element_count * sizeof(int));
    if (*array_to_malloc == NULL) {
        printf("Failed memory allocation\n");
        return;
    }
    srand(time(NULL));

    for (int i = 0; i < array_element_count; ++i) {
        (*array_to_malloc)[i] = rand() % (max_value + 1);
    }
}

int array_check_sorted_i(int* array_to_check, int array_element_count)
{
    for (int j = 0; j < array_element_count - 1; ++j) {
        if (array_to_check[j] > array_to_check[j + 1]) {
            printf("Array is not sorted\n");
            return 0;
        }
    }
    printf("Array is sorted\n");
    return 1;
}

void array_bubble_sort_i(int* array_to_check, int array_element_count)
{
    int temp = 0;
    int i, j = 0;

    for (i = 0; i < array_element_count; i++) {
        for (j = 0; j < array_element_count - 1; j++) {
            if (array_to_check[j] > array_to_check[j + 1]) {
                temp = array_to_check[j];
                array_to_check[j] = array_to_check[j + 1];
                array_to_check[j + 1] = temp;
            }
        }
    }
}