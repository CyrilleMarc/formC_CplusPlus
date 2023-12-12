
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int fibonacci(int n);

int main()
{
	int* tab = NULL;
	int n = 20;
	int i = 0;

	tab = malloc(n * sizeof(int));
	if (NULL == tab)
	{
		printf("memory allocation failure");
		return 1;
	}
	else
		for (i = 0; i < n; i++)
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
}*/

/*

void reloopDown(int n)
{
	if (n >= 0)
	{
		printf("%d ", n);
		reloopDown(n - 1);
	}
}

void main() {

	reloopDown(10);
}*/

//************EXERCICE_1***********************************************
/*
void reloopUp(int start, int end, int step);


void main()
{
	reloopUp(2, 140, 3);
}

void reloopUp(int start, int end, int step)
{
	if (start <= end)
	{
		printf("%d ", start);
		start = start + step;
		reloopUp(start, end, step);

	}
}*/

//************EXERCICE_2******************************************************

/*
long convertInBase10(long n, int base)
{
	long quotient = n / 10;
	long reste = n % 10;

	if (quotient == 0)
	{
		return reste;
	}
	else
	{
		return convertInBase10(quotient, base) * base + reste;
	}
}

void main()
{
	int n = convertInBase10(137, 11);
	printf("%d ", n);
}*/

//************EXERCICE_3_Algorithme_Tour_de_Hanoi**************************


/*
int iteration = 0;

void deplacer(int n, char depart, char but, char intermediaire)
{
	if (n > 0)
	{
		deplacer(n - 1, depart, intermediaire, but);
		printf("Moove a disc from %c --> %c \n", depart, but);
		deplacer(n - 1, intermediaire, but, depart);
		iteration = iteration + 1;
	}
}
	void main()
	{
		int n = 0;

		printf("Number of discs to moove ? :\n");
		scanf("%d", &n);

		clock_t start = clock();

		deplacer(n, 'A', 'B', 'C');

		clock_t end = clock();

		double totalTime = ((double) (end - start)) / CLOCKS_PER_SEC;
		printf("Total execution time: %.2f seconds\n", totalTime);
		printf("Nombre d'iterations: %d\n", iteration);


		return 0;

	}*/

	//************EXERCICE_4_**************************
