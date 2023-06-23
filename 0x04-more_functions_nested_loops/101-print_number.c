#include "main.h"

#include"main.h"

/**
 * print_number - prints a number
 *
 * @n: the number
 *
*/

void print_number(int n)
{
	unsigned int nbr = n;
	if (n < 0) {
		_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		print_number(nbr / 10);
	_putchar((nbr % 10) + '0');
}
