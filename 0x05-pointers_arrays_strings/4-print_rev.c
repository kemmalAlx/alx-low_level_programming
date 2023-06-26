#include "main.h"

/**
 * print_rev - print reverse of s
 *
 * @s: the input
*/

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
		_putchar(s[len--]);
	_putchar('\n');
}
