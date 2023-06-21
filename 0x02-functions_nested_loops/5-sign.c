#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @c: checks input of function
 *
 * Return: 1 and prints + if n is greater than zero
 * 		 0 and prints 0 if n is zero
 * 		-1 and prints - if n is less than zero
 */

int _isalpha(int c)
{
	if (c >= 0)
	{
		_putchar('+');
		return (1);
	}
	if (c <= 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
