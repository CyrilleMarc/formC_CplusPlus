#include <stdio.h>

#include <common/common.h>

int main()
{
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");

    int n = 0;

    while (n <= 5)
        n++;
    printf("%d\n", n);

    return 0;
    //*********************************************
    // int n = 0;
    // do
    // {
    //     if (n % 2 == 0)
    //     {
    //         printf("%d est paire\n", n);
    //         n += 3;
    //         continue;
    //     }
    //     if (n % 3 == 0)
    //     {
    //         printf("%d est un multiple de 3\n", n);
    //         n += 5;
    //     }
    //     if (n % 5 == 0)
    //     {
    //         printf("%d est un multiple de 5\n", n);
    //         break;
    //     }
    //     n += 1;
    // } while (1);
    //*******************************************************

    // int i = 0;
    // int n = 0;
    // int som = 0;

    // printf("Donnez un nombre :\n");
    // scanf("%d", &n);
    // do
    // {
    //     som = n * i;
    //     printf("%d\n", som);
    //     i++;
    // } while (i < 4);
    //*************************************
    // while (i < 4)
    // {
    //     som = n * i;
    //     printf("%d\n", som);
    //     ++i;
    // }

    // int n;
    // do
    // {
    //     printf("Donnez un nombre : \n");
    //     scanf("%d", &n);
    // } while (n != 0);

    // int i, j, n;
    // i = 0;
    // n = ++i;
    // printf("A: i = %d n=%d\n", i, n);

    // char c = '\x01';
    // printf("%d\n", c);
}