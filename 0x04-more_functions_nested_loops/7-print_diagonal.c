#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of time the \ character
 *	should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int tn, space;

		for (tn = 0; tn < n; tn++)
		{
			for (space = 0; space < tn; space++)
			{
				if (space == tn)
					_putchar('\\');
				else if (space < tn)
					_putchar('_');
			}
			_putchar('\n');
		}
	}
}

