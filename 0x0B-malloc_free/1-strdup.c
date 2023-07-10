#include "main.h"

/**
 * *_strdup - a function that duplicates a string
 *
 * @s1: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *s1)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}
