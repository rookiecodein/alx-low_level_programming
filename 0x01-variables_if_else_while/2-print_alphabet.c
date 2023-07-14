#include <stdio.h>
/**
 * main - alphabet game putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' && i == 'q')
			i++;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
