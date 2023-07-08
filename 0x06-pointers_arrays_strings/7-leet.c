#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @leet: string input
 *
 * Return: @leet
*/

char *leet(char *leet)
{
	int i = 0, j;
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int lower[] = {'a', 'e', 'o', 't', 'l'};
	int letter[] = {'4', '3', '0', '7', '1'};

	while (leet[i])
	{
		j = 0;
		while (j < 5)
		{
			if (leet[i] == upper[j] || leet[i] == lower[j])
			{
				leet[i] = letter[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (leet);
}
