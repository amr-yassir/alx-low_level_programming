#include "main.h"
#include <elf.h>

/**
 * main - Displays the information contained in the ELF header
 * @argc: Number of arguments
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success
 *
*/

int main(int argc, char **argv)
{
	Elf64_Ehdr h;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	int file = open(argv[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	ssize_t rd = read(file, &h, sizeof(h));
	if (rd != sizeof(h) || rd < 1)
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	if (close(file) == -1)
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", file), exit(98);

	return (0);
}
