#include "main.h"
/**
 * _isalpha - checks for alphabetics 1 if so. 0 if else.
 * @c: character in ASCII code
 *
 * Return: 1 c is a letter wether uppercase or lowercase. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

