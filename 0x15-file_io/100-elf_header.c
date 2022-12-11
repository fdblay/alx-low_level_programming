#include "main.h"
#include <elf.h>

/**
 * check_elf -> checks if a file is an ELF file
 * @e_ident: pointer to an array of ELF magic numbers
 *
 * if the file is not an ELF file - exit code 98
 * Return: nothing
 */

void check_elf(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 0x7f &&
		    e_ident[ind] != 0x45 &&
		    e_ident[ind] != 0x4c &&
		    e_ident[ind] != 0x46)
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic -> prints the magic numbers of an ELF header
 * @e_ident: pointer to an array of ELF magic numbers
 *
 * Description: magic numbers are separated by spaces
 * Return: nothing
 */
void print_magic(unsigned char *e_ident)
{
	int ind;

	printf(" Magic:  ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_ident[ind]);
		if (ind != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * print_class -> prints the class of the ELF header
 * @e_ident: pointer to array of the ELF class
 * Return: nothing
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:				  ");

	switch (e_ident[EI_CLASS])
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
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data -> prints the data of the ELF file
 * @e_ident: pointer to an array of ELF data
 * Return: nothing
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:				  ");

	switch (e_ident[EI_DATA])
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
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version -> prints the version of the ELF file
 * @e_ident: pointer to an array of ELF version
 * Return: nothing
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:			  %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
	}
}

/**
 * print_OSABI -> prints the OS/ABI of an ELF file
 * @e_ident: Pointer to an array of the ELF OS/ABI
 * Return: nothing
 */
void print_OSABI(unsigned char *e_ident)
{
	printf(" OS/ABI:			  ");

	switch (e_ident[EI_OSABI])
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
			printf("Stand-alone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_ABI -> prints the ABI version of an ELF header
 * @e_ident: Pointer to an array of the ELF ABI version
 * Return: nothing
 */
void print_ABI(unsigned char *e_ident)
{
	printf(" ABI Version:			  %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type -> prints the type of an ELF header
 * @e_type: the ELF type
 * @e_ident: pointer to an array of the ELF data
 *
 * Return: nothing
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type:				  ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry -> prints the entry point of the ELF header
 * @e_entry: the ELF entry point
 * @e_ident: pointer to an array of the ELF class
 *
 * Return: nothing
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close-elf - closes the ELF file
 * @elf: File descriptor for the ELF file
 *
 * Return: nothing
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main -> Displays the information contained in the
 *	ELF header at the start of an ELF file
 * @argc: the number of parameters supplied to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 0n success otherwise exit(98) on failure
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: %s : No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_OSABI(header->e_ident);
	print_ABI(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(0);
	return (0);
}
