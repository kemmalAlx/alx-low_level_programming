#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Succesful)
*/


int ft_strlen(char *str)
{
	int i = -1;

	while (str[++i]);
	return (i);
}

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, &str, ft_strlen(str));
	return (1);
}
