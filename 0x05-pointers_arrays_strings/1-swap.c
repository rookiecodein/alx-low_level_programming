#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer
 * @b: integer
 * Return: 0 success
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;

}
