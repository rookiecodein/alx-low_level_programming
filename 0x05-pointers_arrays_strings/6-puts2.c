#include "main.h"

/**
 * puts2 - prints other character of string
 * @str: input parameter
 * Return: 0 success
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
		putchar(str[o]);
		}
	}
	putchar('\n');
}

