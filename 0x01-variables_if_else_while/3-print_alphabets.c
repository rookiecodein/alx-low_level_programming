#include <stdio.h>
/**
 * main - print alphabet upper and lower
 * Return: 0 (Success)
 */

int main(void)
{
	char i = 'a';
	char I = 'A';
	/*prints a - z*/
	while (i <= 'z')
	{
		putchar(i);
			i++;
	}
	/*prints A - Z*/
	while (I <= 'Z')
	{
		putchar(I);
			I++;
	}
	putchar('\n');

		return (0);
}

