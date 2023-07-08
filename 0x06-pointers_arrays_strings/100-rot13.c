#include "main.h"

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
