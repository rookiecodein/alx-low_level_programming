#include "main.h"

/**
 * _strlen - return lengh of string
 * @s: integer
 * Return: 0 success
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}


