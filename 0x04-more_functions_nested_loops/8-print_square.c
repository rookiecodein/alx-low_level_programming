#include "main.h"

/**
 * print_square - it prints square using #
 *
 * @size: is size of square
 *
 * Return: 0 success
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
		}
		_putchar('\n');
	}
}

