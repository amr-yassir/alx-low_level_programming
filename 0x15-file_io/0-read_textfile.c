#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters to read
 *
 * Return: The actual number of letters read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, r, w;

	if (!filename || !letters)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (w != r || file == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (w);
}
