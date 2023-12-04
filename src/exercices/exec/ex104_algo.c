#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n);

int main()
{
	int* tab = NULL;
	int n = 40;
	int i = 0;

	tab = malloc(n * sizeof(int));
	if (NULL == tab)
	{
		printf("problème mémoire");
		return 1;
	}

	for (i = 0; i < 40; i++)
	{
		tab[i] = fibonacci(i);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", tab[i]);
	}
	free(tab);
	return 0;
}
		int fibonacci(int n)
	{
			if (n <= 1)
			{
				return n;
			}
			else
			{
				return fibonacci(n - 1) + fibonacci(n - 2);
			}
		
	}

