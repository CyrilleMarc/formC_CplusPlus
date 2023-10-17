#pragma once


typedef struct Liste {
    Element* first;
} Liste;

typedef struct Element {
    int number;
    struct Element *next;
} Element;



Liste* single_list_init();
void single_list_insert(Liste *list, int newNumber);
void single_list_delete(Liste *list);
void single_list_display(Liste* list);