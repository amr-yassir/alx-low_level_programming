#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    ssize_t r, w;
    char *buffer;

    if (!filename || !letters)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);
    r = read(file, buffer, letters);
    w = write(STDOUT_FILENO, buffer, r);
    free(buffer);
    close(file);

    return (w);
}