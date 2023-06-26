#include "main.h"

/**
 * _puts - print string str followed by newline
 *
 * @a: first input
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
