#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print an integer
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string
 *
 * @ap: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/
void print_string(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}

/**
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
*/
void print_all(const char *const format, ...)
{
	va_list ap;
	func_printer func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};
	int i = 0, j;

	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		while (j < 4 && format[i] != func[j].symbol)
		{
			j++;
		}
			if (j < 4)
			{
				func[j].print_func(ap);
				printf(", ");
			}
		i++;
	}
	va_end(ap);
	printf("\n");
}



