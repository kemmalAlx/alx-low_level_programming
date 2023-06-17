#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
