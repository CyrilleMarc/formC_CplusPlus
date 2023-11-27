#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <common/common.h>

#define MAX_WORDS 7
#define MAX_WORD_LENGTH 20

//****************************TABLEAU DYNAMIQUE*******************************

/*int main()
{
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");

    int* tab = NULL;
    int i = 0;
    int size = 10;

    tab = malloc(size * sizeof(int));
    if (NULL == tab)
    {
        logger_log(LOG_DEBUG, __FUNCSIG__, "Allocation failed");
        return 1;
    }
    else
    {
        for (i = 0; i < size; ++i)
        {
            tab[i] = i;
            printf("%d ", *tab + i);
        }
    }

return 0;
}*/

//****************************TABLEAU A TAILLE VARIABLE*********************************

/*int main()
{
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");

    int tab[10];
    int i = 0;
    int size = 10;

    for (i = 0; i < 10; ++i)
    {
        tab[i] = i;
        printf("%d ", tab[i]);
    }

    return 0;
}
*/

//********************REMPLISSAGE TABLEAU AVEC DES STRING********************

int main()
{
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");

    char tab[MAX_WORDS][MAX_WORD_LENGTH];
    char buffer[MAX_WORD_LENGTH];
    int i = 0;
    char langage[10] = "\"langage";

    FILE* file = fopen("C:/Users/cyril/Desktop/dataFiles/array.txt", "r");
    if (NULL == file)
    {
        logger_log(LOG_DEBUG, __FUNCSIG__, "file not found");
        return 1;
    }
    else
    {
        while (i < MAX_WORDS && fscanf(file, "%19s", buffer) == 1)
        {
            strcpy(tab[i], buffer);
            ++i;
        }
        fclose(file);

        for (i = 0; i < MAX_WORDS; ++i)
        {
            printf("%s ", langage);
            printf("%d\"", i + 1);
            printf(" : \"%s\"\n", tab[i]);
        }
       
    }

    return 0;
}