#include "main.h"

/**
 * _strlen - swap two numbers
 *
 * @s: first input
 * Return: length of (s)
*/


int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
