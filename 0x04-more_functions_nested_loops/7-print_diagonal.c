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
				_putchar(' ');
			_putchar(92);
			/**
			 * is equal to '/' char
			 */
			_putchar('\n');
			}
		}
	}
}

