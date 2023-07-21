#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i + 1 != n)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
