#include "main.h"

/**
 * _puts - function prints string followed nwline to stdout
 * @str: string parameter
 * Return: 0 success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}

