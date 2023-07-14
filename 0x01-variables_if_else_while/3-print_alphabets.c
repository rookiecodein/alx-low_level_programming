#include <stdio.h>
/**
 * main - print alphabet upper and lower
 * Return: 0 (Success)
 */

int main(void)
{
	char i = 'A , a';
		
		/*prints a - z && A - Z*/

		while (i <= 'z' && i <= 'Z')
		{
			putchar(i);
				i++;
		}
		putchar('\n');

		return (0);
}

