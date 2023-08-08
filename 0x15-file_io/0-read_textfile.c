#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, r, r_p;
    char *buffer;

    if (!filename && letters)
        return (0);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);
    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
        return (0);
    r = read(fd, buffer, letters);
    close(fd);
    if (r < 0)
    {
        free(buffer);
        return (0);
    }
    buffer[r] = '\0';
    r_p = write(STDOUT_FILENO, buffer, r);
    free(buffer);
    if (r_p < 0)
        return (0);
    return (r_p);
}
