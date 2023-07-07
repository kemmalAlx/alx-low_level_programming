#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @ac: holds the number of arguments passed
 * @av: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int	main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
