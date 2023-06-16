#include <unistd.h>

/**
 * ft_strlen function
 *
 * this function count the string length.
 * str is the string
 *
 * Return: Always 0 (Succesful)
*/

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: This time we return an error 1.
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, &str, ft_strlen(str));
	return (1);
}
