#include "3-calc.h"

/**
 * main - function main
 *
 * @ac: length of argument
 * @av: values of arguments
 *
 * Return: return success or Error
 */
int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((av[2][0] != '+' && av[2][0] != '-'
		&& av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%') || av[2][1])
	{
		printf("Error\n");
		return (99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
	return (0);
}
