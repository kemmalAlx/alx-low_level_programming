#include "main.h"

/**
 * _puts - print string str followed by newline
 *
 * @str: the strinpg
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
