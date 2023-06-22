#include"main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = -1;

	while(++num != 10)
		_putchar(num + 48);
	_putchar('\n');
}
