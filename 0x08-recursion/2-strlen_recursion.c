#include "main.h"

int len = 0;

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string
 *
 * Return: length
*/


int _strlen_recursion(char *s)
{
	if (!*s)
		return len;
	len++;
	_strlen_recursion(s + 1);
}
