#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, r, r_p;
    char *buffer;

    if (!filename)
        return (0);
    buffer = malloc(sizeof(char) * letters + 1);
    if (!buffer)
        return (0);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }
    r = read(fd, buffer, letters);
    if (r == -1)
    {
        free(buffer);
        return (0);
    }
    buffer[r] = '\0';
    r_p = write(1, buffer, r);
    free(buffer);
    close(fd);
    return (r_p);
}
