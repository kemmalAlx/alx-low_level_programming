#include "main.h"

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @str
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (i < size)
		str[i++] = c;
	return (str);
}
