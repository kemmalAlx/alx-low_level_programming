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

	if (!s1 && !s2)
		return (NULL);
	if (s1)
		i = strlen(s1);
	if (s2)
		j = strlen(s2);
	str = malloc(sizeof(char) * (i + j) + 1);
	if (!str)
		return (NULL);
	if (s1)
	{
		i = 0;
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		j = 0;
		while (s2[j])
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char *s;

	s = str_concat("Hello", NULL);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = str_concat(NULL, "Hello");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}
