#include <stdio.h>

#include <common/common.h>

int main()
{
	logger_set_current_level(LOG_INFO);
	logger_log(LOG_DEBUG, __FUNCSIG__, "");


	array_bubble_sort_i();
    return 0,
}

void array_bubble_sort_i(int* array_to_check, int array_element_count)
{
	int temp = 0;
	int i, j = 0;

	for (i = 0; i < array_element_count; i++) {
		for(j=0; j < array_element_count - 1; j++){
			if (array_to_check[j] > (array_to_check[j + 1])) {
				temp = array_to_check[j];
				array_to_check[j] = array_to_check[j + 1];
				array_to_check[j + 1] = temp;
			}
		}

	}
}