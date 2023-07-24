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
		_putchar(*str++);
	}
	_putchar('\n');
}

