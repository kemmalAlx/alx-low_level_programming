#include "main.h"

/**
 * puts_half - prints every other character of a string
 *
 * @s: the input
*/

void puts_half(char *str)
{
	int len = (strlen(str)) / 2;

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
