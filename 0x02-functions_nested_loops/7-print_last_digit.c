#include "main.h"

/**
 * print_last_digit - function that computes the last
 *       digit
 *
 * @nbr: takes in integer type input for function
 *
 * Return: last digit of nbr
*/

int print_last_digit(int nbr)
{
	if (nbr < 0)
		nbr = -1 * (nbr % 10);
	_putchar(nbr % 10 + '0');
	return (nbr % 10);
}
