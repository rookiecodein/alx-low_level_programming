#include "main.h"
/**
 * _isalpha - checks for alphabetics
 * @c: character in ASCII code
 * return: 1 c is a letter wether uppercase of lower case. O otherwise
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
