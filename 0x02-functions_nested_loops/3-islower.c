#include "main.h"
/**
 * _islower - checking for lower case 
 * result: lower case
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
