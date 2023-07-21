#include "variadic_functions.h"

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_string(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}

/**
 * print_strings - a function that prints string,
 * followed by a new line.
 *
 * @separator: string to be printed between string
 * @n: number of integers passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	func_printer func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	int i = 0, j;

	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == func[j].symbol[0])
			{
				func[j].print_func(ap);
				if (format[i] && format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}



