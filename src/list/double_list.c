#include <stdio.h>
#include <stdlib.h>

#include "list/double_list.h" 
#include "common/common.h"

Liste* double_list_init() {
	Liste* list = malloc(sizeof(Liste));

	if (NULL == list) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "Failed memory allocation\n");
	}
	list->first = NULL;
	return list;

}	

void double_list_insert_element(Liste* list, int number) {
	Element *new_element = malloc(sizeof(Element));
	if (NULL == new_element) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "Failed memory allocation\n");
	}

	new_element->number = number;
	new_element->next = NULL;
	new_element->back = NULL;

	if (NULL == list->first) {
		list->first = new_element;
	}
	else {
		Element* current = list->first;
		while (NULL != current->next) {
			current = current->next;
		}
		current->next = new_element;
		new_element->back = current;
	}

}

void double_list_display(Liste* list) {

	Element* current = list->first;
	while (NULL != current) {
		printf("%d->", current->number);
		current = current->next;
	}
	printf("\n");

}
