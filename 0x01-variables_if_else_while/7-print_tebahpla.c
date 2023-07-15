#include <stdio.h>
/**
 * main - mirror reverse alphabet
 * Return: 0 Success
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
