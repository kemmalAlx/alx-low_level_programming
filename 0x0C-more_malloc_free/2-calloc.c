#include "main.h"

/**
 * set_zero - fills memory with a constant byte
 *
 * @vd: input pointer that represents memory
 *     block to fill
 * @size: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/

char *set_zero(char *vd, int size)
{
	int i = 0;

	while (i < size)
	{
		vd[i] = 0;
		i++;
	}
	return (vd);
}

/**
 * _calloc - a function that allocates
 *           memory for an array using malloc
 *
 *           It is basically the equivalent to
 *           malloc followed by memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret;

	if (!nmemb || !size)
		return (NULL);
	ret = malloc(size * nmemb);
	if (!ret)
		return (NULL);
	set_zero(ret, size * nmemb);
	return (ret);
}
