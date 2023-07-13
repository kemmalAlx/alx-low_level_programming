#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: pointer to our new allocated memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	int *nbr;

	nbr = malloc(sizeof(int) * b);
	if (!nbr)
		exit (98);
	return (nbr);
}
