#include "main.h"

/**
 * main - a program that prints all arguments it receives
 *
 * @ac: holds the number of arguments passed
 * @av: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
		printf("%s\n", av[i]);
	return (0);
}
