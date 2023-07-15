#include <stdio.h>
/**
 * main - combination singl digit
 * Return: 0 Success
 */

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		putchar(dig + 48);

		if (dig != 9)
		{
			putchar(',');
			putchar(' ');
		}
		dig++;
	}
	putchar('\n');
	return (0);
}
