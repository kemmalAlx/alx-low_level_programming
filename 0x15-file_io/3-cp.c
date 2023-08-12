#include "main.h"

/**
 * _strlen - a function counted the length of string
 *
 * @str: the string to be counted
 *
 * Return: length of string
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * print_err - a function printed the error
 *
 * @err: the number to exit
 * @file_name: name of the file
 * @fd: file descriptor
*/
void print_err(int err, char *file_name, int fd)
{
	switch (err)
	{
	case 97:
		dprintf(2, "%s %s\n", "Usage: cp file_from file_to ", file_name);
		exit(err);
		break;
	case 98:
		dprintf(2, "%s\n", "Error: Can't read from file");
		exit(98);
		break;
	case 99:
		dprintf(2, "%s %s\n", "Error: Can't write to ", file_name);
		exit(err);
		break;
	case 100:
		dprintf(2, "%s %d\n", "Error: Can't close fd", fd);
		exit(100);
	default:
		break;
	}
}

/**
 * main - a program that copies the content of a file to another file.
 *
 * @ac: number of arguments
 * @av: name of each argument
 *
 * Return: success of fail
*/
int main(int ac, char **av)
{
	char *fil_in = av[1], *file_out = av[2], *buffer;
	int fd_in, fd_out, close_in, close_out, read_in, write_out;

	if (ac != 3)
		print_err(97, NULL, 0);
	fd_in = open(fil_in, O_RDONLY);
	if (fd_in == -1)
		print_err(98, fil_in, 0);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);
	fd_out = open(file_out, O_CREAT | O_WRONLY, 0604);
	if (fd_out == -1)
		print_err(99, file_out, 0);
	while ((read_in = read(fd_in, buffer, 1024)))
	{
		if (read_in == -1)
			print_err(98, fil_in, 0);
		write_out = write(fd_out, buffer, _strlen(buffer));
		if (write_out == -1)
			print_err(99, file_out, 0);
	}
	free(buffer);
	close_in = close(fd_in);
	close_out = close(fd_out);
	if (close_in)
		print_err(100, NULL, fd_in);
	if (close_out)
		print_err(100, NULL, fd_in);
	return (0);
}
