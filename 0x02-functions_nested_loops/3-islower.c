#include "main.h"
/**
 * _islower - checking for lower case
 * @c: the character in ASCII code
 * Return: 1 for lowercase. 0 elsewhere
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
