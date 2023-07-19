#include "main.h"
/**
 * times_table - prints nine times table
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/* 
			 * put a space if product is a simple number
			 * place the first digit if it is two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/
			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}


