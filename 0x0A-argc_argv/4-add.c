#include "main.h"

/**
 * main - a program that adds positive numbers
 *
 * @ac: holds the number of arguments passed
 * @av: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int ac, char **av)
{
	int i = 1, j, result = 0;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(av[i]); 
		i++;
	}
	printf("%d\n", result);
	return (0);
}
