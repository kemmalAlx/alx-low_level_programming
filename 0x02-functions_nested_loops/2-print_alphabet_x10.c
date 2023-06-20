#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times, in lowercase,
 *  followed by a new line.
*/

void print_alphabet_x10(void)
{
	int times = 0;
	char c;

	while (times != 10)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		times++;
	}
}