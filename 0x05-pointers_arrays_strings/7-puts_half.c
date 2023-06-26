#include "main.h"

/**
 * puts_half - prints  half of a string
 *
 * @str: the input
 */

void puts_half(char *str)
{
	int len = (strlen(str));

	if (len % 2 == 0)
	{
		len = len / 2;
		while (str[len])
		{
			_putchar(str[len]);
			len++;
		}
	}
	else
	{
		len = ((len - 1) / 2) + 1;
		while (str[len])
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}
