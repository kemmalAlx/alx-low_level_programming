#include "main.h"

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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(err);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(err);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(err);
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
	char *fil_in = av[1], *file_out = av[2], buffer[1024];
	int fd_in, fd_out, close_in, close_out, read_in, write_out;

	if (ac != 3)
		print_err(97, NULL, 0);
	fd_in = open(fil_in, O_RDONLY);
	if (fd_in == -1)
		print_err(98, fil_in, 0);
	fd_out = open(file_out, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_out == -1)
		print_err(99, file_out, 0);
	while ((read_in = read(fd_in, buffer, 1024)))
	{
		if (read_in == -1)
			print_err(98, fil_in, 0);
		write_out = write(fd_out, buffer, read_in);
		if (write_out == -1)
			print_err(99, file_out, 0);
	}
	close_in = close(fd_in);
	close_out = close(fd_out);
	if (close_in)
		print_err(100, NULL, fd_in);
	if (close_out)
		print_err(100, NULL, fd_in);
	return (0);
}
