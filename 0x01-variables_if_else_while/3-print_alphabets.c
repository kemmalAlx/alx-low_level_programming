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
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

