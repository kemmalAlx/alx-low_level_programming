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
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
