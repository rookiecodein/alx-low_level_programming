#include "main.h"

/**
 * puts_half - prints half of string
 * @str: input integer
 * Return: 0 success
 */

void puts_half(char *str)
{
	int a;
	int b;
	int i;

	i = 0;
	for (a = 0; str[a] != '\0'; a++)
		i++;
	n = (i / 2);
	if ((i % 2) == 1)
		n = ((i + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}

