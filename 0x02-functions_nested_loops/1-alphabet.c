#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
