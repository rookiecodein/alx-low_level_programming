#include <stdio.h>
/**
 * main - print putchar
 * Return: 0 success
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 10; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
