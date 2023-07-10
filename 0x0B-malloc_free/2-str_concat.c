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
	int i = -1, j = -1;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
