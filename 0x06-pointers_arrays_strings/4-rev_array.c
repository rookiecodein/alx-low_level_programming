#include "main.h"

/**
 * reverse_array - reverse content of array of integer
 * @a: integer
 * @n: input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

