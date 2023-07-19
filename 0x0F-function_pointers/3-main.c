#include "3-calc.h"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+' || av[2][0] == '-'
		|| av[2][0] == '*' || av[2][0] == '/' || av[2][0] == '%')
			printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
	}
	return (0);
}
