#include "main.h"

int	ft_strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return count;
}

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int sum;
	int size;
	char *concat;

	if (!ac || !av)
		return NULL;
	sum = 0;
	i = 0;
	while (i < ac)
	{
		sum += ft_strlen(av[i]);
		i++;
	}
	concat = malloc(sizeof(char) * (sum + 1));
	if (!concat)
		return NULL;
	i = 0;
	j = 0;
	size = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			concat[size] = av[i][j];
			j++;
			size++;
		}
		concat[size] = '\n';
		size++;
		i++;
	}
	concat[size] = '\0';
	return (concat);
}

