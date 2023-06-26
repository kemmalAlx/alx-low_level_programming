#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: the input
*/

void rev_string(char *s)
{
	int i = 0, j = strlen(s) -1, temp;
	const int fixedLength = strlen(s);

	while (i <= fixedLength / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
