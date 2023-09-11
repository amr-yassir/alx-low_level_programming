#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    ssize_t r, w;
    char text[1024 * 8];

    if (!filename || !letters)
        return (0);
    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);
    r = read(file, &text[0], letters);
    w = write(STDOUT_FILENO, &text[0], r);
    close(file);

    return (w);
}