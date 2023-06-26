#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: the input
*/

void rev_string(char *s)
{
	int i = 0, j = 0, temp;

	while (s[j++]);
	j -= 1;
	while (i < j / 2)
	{
		temp = s[i];
		s[i] = s[j - i];
		s[j - i] = temp;
		i++;
	}
}
