#include "main.h"
#include <elf.h>

/**
 * print_magic - Prints the magic numbers of an ELF header.
 *
 * @head: ELF Header.
 */
void print_magic(Elf64_Ehdr head)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", head.e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints Elf Header class.
 *
 * @head: ELF Header.
 */
void print_class(Elf64_Ehdr head)
{
	printf("  Class:                             ");

	switch (head.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
}

/**
 * print_data - Prints ELF Header data.
 *
 * @head: ELF Header.
 */
void print_data(Elf64_Ehdr head)
{
	printf("  Data:                              ");

	switch (head.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
	}
}

/**
 * print_version - Prints Elf Header version.
 *
 * @head: ELF Header.
 */
void print_version(Elf64_Ehdr head)
{
	 printf("  Version:                           %d",
			head.e_ident[EI_VERSION]);

	switch (head.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
		break;
		default:
			printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints ELF header os/abi.
 *
 * @head:ELF Header.
 */
void print_osabi(Elf64_Ehdr head)
{
	printf("  OS/ABI:                            ");

	switch (head.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
	default:
		printf("<unknown: %x>\n", head.e_ident[EI_OSABI]);
	}
}

/**
 * print_abiversion - Prints the ELF header ABI version.
 *
 * @head: ELF header.
 */
void print_abiversion(Elf64_Ehdr head)
{
	printf("  ABI Version:                       %d\n",
		head.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the ELF header type.
 *
 * @head: The ELF header.
 */
void print_type(Elf64_Ehdr head)
{
	char *e = (char *)&head.e_type;
	itn i = 0;

	printf("  Type:                              ");
	if (head.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;

	switch (e[i])
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e[i]);
	}
}

/**
 * print_entry - Prints the ELF header Entry point.
 *
 * @head: the ELF header.
 */
void print_entry(Elf64_Ehdr head)
{
	int i = 0;
	int len = 0;
	unsigned char *e = (unsigned char *)&head.e_entry;

	printf("  Entry point address:               0x");

	if (head.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[i])
			i--;
		printf("%x", e[i--]);
		for (; i >= 0; i--)
			printf("%02x", e[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!e[i])
			i++;
		printf("%x", p[i++]);
		for (; i >= len; i++)
			printf("%02x", e[i]);
		printf("\n");
	}
}

/**
 * main - Program that displays the information contained in the ELF Header at
 *	the start of an ELF file.
 *
 * @argc: argument count type integer.
 * @argv: pointer to pointer to an argument vector.
 *
 * Return: 0 on success
 *	1 on failure
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr head;
	int fd;
	ssize_t buff;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	buff = read(fd, &head, sizeof(head));
	if (buff < 1 || buff != sizeof(head))
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	if (head.e_ident[0] == 0x7f && head.e_ident[1] == 'E'
			&& head.e_ident[2] == 'L' && head.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Error: Not an ELF file %s\n", argv[1]);
		exit(98);

	print_magic(head);
	print_class(head);
	print_data(head);
	print_version(head);
	print_osabi(head);
	print_abiversion(head);
	print_type(head);
	print_entry(head);

	if close(fd);
		dprintf(STDERR_FILENO, "Error: closing file descriptor %d\n", fd);
		exit(98);
	return (EXIT_SUCCESS);
}

