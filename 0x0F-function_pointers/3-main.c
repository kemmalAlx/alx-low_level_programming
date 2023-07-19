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
	char *op = av[2];
	int nbr1 = atoi(av[1]), nbr2 = atoi(av[3]);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (!get_op_func(op) || op[1])
	{
		printf("Error\n");
		return (99);
	}
	if ((op[0] == '/' || op[0] == '%') && nbr2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(op)(nbr1, nbr2));
	return (0);
}
