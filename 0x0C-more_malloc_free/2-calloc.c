#include "main.h"

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
	char	*ret;
	unsigned int i = 0;
	int j = 0;

	if (!nmemb || !size)
		return (NULL);
	ret = malloc(size * nmemb);
	if (!ret)
		return (NULL);
	while (i < nmemb)
	{
		j = 0;
		while (j < size)
		{
			ret[i] = 0;
			j++;
		}
		i++;
	}
	return ((void*)ret);
}
