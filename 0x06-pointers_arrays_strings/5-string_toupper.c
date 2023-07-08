#include "main.h"

/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: @s
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}
