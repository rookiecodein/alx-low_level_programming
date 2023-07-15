#include <stdio.h>
/**
 * main - print lowercase other base
 * Return: 0 Success
 */

int main(void)
{
	int dig = 48; /*48; decimal rep of 0*/

	while (dig <= 102) /*102 decimal rep of f*/
	{
		putchar(dig);
		/* after 9 we jump till 96 ; */
		if (dig == 57)
			dig += 39;
		dig++;
	}
	putchar('\n');

	return (0);
}
