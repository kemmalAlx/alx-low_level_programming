#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combinations of two digits.
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 8)
	{
		while (j <= 9)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
