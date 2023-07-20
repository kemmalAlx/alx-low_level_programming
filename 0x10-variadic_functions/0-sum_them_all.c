#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns
 * the sum of all its parameters.
 *
 * @n: number of args
 * Return: the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (n <= 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
