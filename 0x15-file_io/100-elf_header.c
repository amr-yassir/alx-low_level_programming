#include "main.h"

/**
 * main - Displays the information contained in the ELF header
 * @argc: Number of arguments
 * @argv: Array of pointers to the arguments
 *
 * Return: 1 on success, 0 on failure
 *
*/

void print_magic(unsigned char *e_ident)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

void print_class(unsigned char e_ident[EI_NIDENT])
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
	}
}

void print_data(unsigned char e_ident[EI_NIDENT])
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid\n");
	}
}

void print_version(unsigned char e_ident[EI_NIDENT])
{
	printf("  Version:                           0x%x (current)\n", e_ident[EI_VERSION]);
}

void print_osabi(unsigned char e_ident[EI_NIDENT])
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("Other\n");
	}
}

void print_abiversion(unsigned char e_ident[EI_NIDENT])
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(Elf64_Ehdr h)
{
	printf("  Type:                              ");
	switch (h.e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Other\n");
	}
}

void print_entry(Elf64_Ehdr h)
{
	printf("  Entry point address:               0x%lx\n", (unsigned long)h.e_entry);
}

int main(int argc, char *argv[])
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

	print_magic(h.e_ident);
	print_class(h.e_ident);
	print_data(h.e_ident);
	print_version(h.e_ident);
	print_osabi(h.e_ident);
	print_abiversion(h.e_ident);
	print_type(h);
	print_entry(h);

	if (close(file) == -1)
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", file), exit(98);

	return (EXIT_SUCCESS);
}
