#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string parameter
 * Return: 0 success
 */

void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}

