#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read.
 *
 * Return: The actual number of letters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buffer;
    ssize_t fd, r, w;

    if (!filename || !letters)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
        return (0);

    fd = open(filename, O_RDONLY);
    r = read(fd, buffer, letters);
    w = write(STDOUT_FILENO, buffer, r);

    if (w != r || fd == -1 || r == -1 || w == -1)
    {
        free(buffer);
        return (0);
    }

    free(buffer);
    close(fd);

    return (w);
}