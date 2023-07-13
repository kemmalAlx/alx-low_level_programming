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
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory
 *     block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
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
