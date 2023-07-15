#include <stdio.h>
/**
 * main - mirror reverse alphabet
 * return: 0 success
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
