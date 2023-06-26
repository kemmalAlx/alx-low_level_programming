#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: the input
*/

void rev_string(char *s)
{
	int i = -1, j = strlen(s) - 1, temp;

	while (++i < j / 2)
	{
		temp = s[i];
		s[i] = s[j - i];
		s[j - i] = temp;
	}
}
