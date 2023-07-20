#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of time the \ character
 *	should be printed
 */

void print_diagonal(int n)
{
	int tn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (tn = 1; tn <= n; tn++)
		{
			for (space = 1; space <= tn; space++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar('_');
			}
			_putchar('\n');
		}
	}
}

