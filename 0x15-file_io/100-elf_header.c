#include "main.h"

/**
 * print_magic - prints ELF magic bytes
 * @h: ELF header struct
*/

void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer to the arguments
 *
 * Return: 1 on success
*/

int main(int argc, char **argv)
{
	Elf64_Ehdr h;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	int file = open(argv[1], O_RDONLY);

	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	ssize_t b = read(file, &h, sizeof(h));

	if (b < 1 || b != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	print_magic(h);

	if (close(file) == -1)
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", file), exit(98);
	return (EXIT_SUCCESS)
}
