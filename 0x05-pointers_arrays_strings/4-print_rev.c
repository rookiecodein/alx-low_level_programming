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
	i--;
	for (o > 0; o = i; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

