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

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

