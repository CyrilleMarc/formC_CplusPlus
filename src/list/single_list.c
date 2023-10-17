#include <stdio.h>
#include <stdlib.h>

#include <list/single_list.h>
#include <common/common.h>



Liste *single_list_init() {
	Liste *list = malloc(sizeof(*list));
	Element *element = malloc(sizeof(*element));

	if (NULL == list || NULL == element) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "Failed memory allocation\n");
	}
	element->number = 0;
	element->next = NULL;
	list->first = element;

	return list;
}

void single_list_insert(Liste* list, int newNumber) {
	Element* new = malloc(sizeof(*new));
	if (NULL == list || NULL == new) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "Failed memory allocation\n");
	}
	new->number = newNumber;

	new->number = newNumber;
	new->next = list->first;
	list->first = new->number = newNumber;
	;
}

void single_list_delete(Liste *list) {
	if (NULL == list) {
		logger_log(LOG_INFO, __FUNCSIG__, "Liste do not found\n");
	}
	if (NULL == list->first) {
		Element* toDelete = list->first;
		list->first = list->first->next;
		free(toDelete);
	}
}

void single_list_display(Liste *list) {
	if (NULL == list) {
		logger_log(LOG_INFO, __FUNCSIG__, "Liste do not found\n");
	}
	Element* current = list->first;
	
	while (NULL != current) {
		printf("%d-> ", current->number);
		current = current->next;
	}
		logger_log(LOG_INFO, __FUNCSIG__, "NULL\n");
}

