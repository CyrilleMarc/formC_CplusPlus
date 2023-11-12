#include <stdio.h>
#include <stdlib.h>

#include <common/common.h>
#include <list/current_doubleList.h>

Liste* init_newDoubleList_i()
{
	Liste* liste = malloc(sizeof(Liste));
	if (NULL == liste) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "Memory allocation failed");
		return NULL;
	}
	liste->first = NULL;
	return liste;
}


int insert_element_in_doubleListe_i(Liste* liste, int newNumber) 
{
	Element* newElement = malloc(sizeof(Element));
	if (NULL == newElement) 
	{
		logger_log(LOG_DEBUG, __FUNCSIG__, "DoubleListe not found");
		return 1;
	}
	newElement->number = newNumber;
	newElement->next = NULL;
	newElement->back = NULL;

	if (NULL == liste->first) 
	{
		liste->first = newElement;
	}
	else 
	{
		Element* current = liste->first;
		while (NULL != current->next) 
		{
			current = current->next;
		}
		current->next = newElement;
		newElement->back = current;
	}
	return 0;
}

void list_sort(Liste* liste) 
{
	int swapped;
	Element* current;
	Element* nextElement = NULL;

	if (liste->first == NULL)
		return;

	do {
		swapped = 0;
		current = liste->first;

		while (current->next != nextElement) 
		{
			if (current->number > current->next->number) 
			{
				int temp = current->number;
				current->number = current->next->number;
				current->next->number = temp;
				swapped = 1;
			}
			current = current->next;
		}
		nextElement = current;
	} while (swapped);
}

void freeList(Liste *liste) 
{
	Element* current = liste->first;
	Element* next;

	while (NULL != current) 
	{
		next = current->next;
		free(current);
		current = next;
	}
}

int list_is_sorted(Liste* liste) 
{
	int isLess = 0;
	int count = 0;
	Element* current = liste->first;
	while (current != NULL && current->next != NULL) 
	{
		count++;
		if (current->number <= current->next->number) 
		{
			isLess++;
		}
		current = current->next;
	}
	return isLess == count;
}

int init_file_to_store(const char *fileName, double *content, int liste_element_count) 
{
	FILE* file = fopen(fileName, "a");
	if (NULL == file) 
	{
		logger_log(LOG_DEBUG, __FUNCSIG__, "File not found");
		return 1;
	}
	fprintf(file, "%06f secondes pour un tri de %d entr�es\n", *content, liste_element_count);
	if (fprintf(file, "", *content, liste_element_count) == -1) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "function failed");
		return -1;
	}
	fclose(file);
	if (fclose(file) == 0) 
	{
		logger_log(LOG_DEBUG, __FUNCSIG__, "function failed");
	}
	return 0;
}

/*
int retrieve_data_from_file(const char* fileName, double* content)
{
	FILE* file = fopen(fileName, "r");
	double* dataFromFile = 0;

	while (fscanf(fileName, "%f", dataFromFile) == 1)
	{
		printf("%f\n", dataFromFile);
	}
}*/