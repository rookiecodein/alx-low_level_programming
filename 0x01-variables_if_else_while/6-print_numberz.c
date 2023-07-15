#include <stdio.h>
/**
 * main - singl digit only putchar
 * Return: 0 success
 */

int main(void)
{
	int dig = 0;
	
	while (dig <= 9)
	{
		/*using ASCII*/
		putchar(dig + '0');
		dig++;
	}
	putchar('\n');
	return (0);
}
