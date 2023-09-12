#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char buffer[BUF_SIZE];
	int cp_from, cp_to, rd, wr;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (cp_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((rd = read(cp_from, buffer, BUF_SIZE)) > 0)
	{
		wr = write(cp_to, buffer, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(cp_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_from), exit(100);
	if (close(cp_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_to), exit(100);

	return (0);
}
