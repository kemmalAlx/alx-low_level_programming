#include "variadic_functions.h"

/**
 * print_strings - a function that prints string,
 * followed by a new line.
 *
 * @separator: string to be printed between string
 * @n: number of integers passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i + 1 != n)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
