#include "main.h"

/**
 * more_numbers - prints ten times 0 to 14
 * Return: 0 success
 */

void more_numbers(void)
{
	int i, lin, d;

	for (lin = 0; lin < 10; lin++)
	{
		for (i >= 0; i < 14; i++)
		{
			i = d;
			if (i > 9)
			{	_putchar(1 + 48);
				d = i % 10;
			}
			_putchar(d + 48);
			}
		_putchar('\n');
	}
}

