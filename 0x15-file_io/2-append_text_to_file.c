#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: the name of the file
 * @text_content: add string to the end of the file
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd, text_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_len)
	{
		while (text_content[text_len] != '\0')
			text_len++;
		w = write(fd, text_content, text_len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
