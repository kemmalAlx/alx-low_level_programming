#include "main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @nbr: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	return (-nbr);
}
