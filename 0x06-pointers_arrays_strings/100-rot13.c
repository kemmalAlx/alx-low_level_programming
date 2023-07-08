#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @str: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j = 0;
		while (letters[j])
		{
			if (str[i] == letters[j])
				str[i] = rot[j];
			j++;
		}
		i++;
	}
	return (str);
}
