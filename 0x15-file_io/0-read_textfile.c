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
    int file;
    ssize_t r, w;
    char buffer[1024 * 8];

    if (!filename || !letters)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);

    r = read(file, &buf[0], letters);
    w = write(STDOUT_FILENO, &buf[0], r);
    close(file);
    return (w);
}