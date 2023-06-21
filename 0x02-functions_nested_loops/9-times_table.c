#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int res;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = i * j;
			if (j)
			{
				if (j != 10)
					_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
				_putchar((i * j) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
