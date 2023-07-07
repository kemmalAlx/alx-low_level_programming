#include "main.h"

/**
 * main - a program that multiplies two arguments passed into it
 *
 * @ac: holds the number of arguments passed
 * @av: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int ac, char **av)
{
	(void)ac;
	if (ac == 3)
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
