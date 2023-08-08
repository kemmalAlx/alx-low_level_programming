#include "main.h"

/**
 * create_filr - a function that creates a file.
 *
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return : 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len = -1;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[++len]);
		write(fd, text_content, len);
	}
    return (1);
}
