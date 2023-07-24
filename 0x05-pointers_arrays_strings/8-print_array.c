#include "main.h"

/**
 * print_array - prints n elem of arrays of integers
 * @a: integer parameter
 * @n: integer parameter
 * Return: 0 success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

