#include "main.h"
/**
 * print_alphabet_x10 - program that print alphabet ten times
 * result: a to z ten times
 */

void print_alphabet_x10(void)
{
	int line, i;

	for (line = 0; line <= 9; line++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

}
