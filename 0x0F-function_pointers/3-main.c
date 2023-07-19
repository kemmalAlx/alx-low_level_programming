#include "3-calc.h"

/**
 * main - Program main
 *
 * @ac: length of argument
 * @av: values of arguments
 *
 * Return: return success or Error
*/
int main(int ac, char **av)
{
	int nbr1 = atoi(av[1]), nbr2 = atoi(av[3]);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (!get_op_func(av[2]) || av[2][1])
	{
		printf("Error\n");
		return (99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && nbr2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(av[2])(nbr1, nbr2));
	return (0);
}
