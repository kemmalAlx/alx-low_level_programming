#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * 
 * @name: name that printed
 * @f: a function who print the name
 * 
 * Return: NULL
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		exit(0);
	f(name);
}
