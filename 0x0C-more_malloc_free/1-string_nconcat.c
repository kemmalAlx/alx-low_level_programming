#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = strlen(s1), s2_len = strlen(s2), i = -1, j = -1;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= s2_len)
		n = s2_len;
	str = malloc(sizeof(char) * (s1_len + n) + 1);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (++j < n)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
