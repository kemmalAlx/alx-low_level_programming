#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *str)
{
	int i = 0;
	// int upper = 
	// char lower[] = 
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else while (str[i] >= 'N' && str[i] <= 'Z' || str[i] >= 'n' && str[i] <= 'z')
		{
			str[i] -= 13;
			break;
		}
		i++;
	}
	return str;
}
