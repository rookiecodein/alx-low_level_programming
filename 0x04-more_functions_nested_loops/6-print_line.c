#include "main.h"

/**
 * print_line - draw a line in the webterm
 * @n: number of time charc _ to be printed
 * Return: 0 success
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');	
		_putchar('\n');
	}
}


