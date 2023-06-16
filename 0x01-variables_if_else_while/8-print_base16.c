#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alpabect in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c = '0';

	while (c <= 'f')
	{
		putchar(c);
		c++;
		if (c == '9')
			c = 'a';
	}
	putchar('\n');
	return (0);
}

