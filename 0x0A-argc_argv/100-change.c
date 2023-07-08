#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int ac, char **av)
{
	int num = atoi(av[1]), j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (ac != 2)
		return (printf("Error\n"), 1);
	if (num < 0)
		return (printf("0\n"), 0);
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}