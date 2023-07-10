#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;

	if (s1)
		i = strlen(s1);
	if (s2)
		j = strlen(s2);
	str = malloc(sizeof(char) * (i + j) + 1);
	if (!str)
		return (NULL);
	if (s1)
	{
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
	}
	if (s2)
	{
		j = -1;
		while (s2[++j])
			str[i++] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
