#include "main.h"
#include <elf.h>

/**
  * ELFcheck - a function that checks if a file is an ELF file
  * @e_ident: header information
  * Return: void
  */
void ELFcheck(unsigned char *e_ident)
{
	int i = 0;

	for (; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
  * printMagic - a function that prints the magic numbers of an ELF file
  * @e_ident: header information
  * Return: void
  */
void printMagic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
  * printClass - a function that prints the class of elf header
  * @e_ident: header information
  * Return: void
  */
void printClass(unsigned char *e_ident)
{
	printf("  Class:                             ");
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
  * printData - a funtion that prints data of elf header
  * @e_ident: header information
  * Return: void
  */
void printData(unsigned char *e_ident)
{
	printf("  Data:                              ");
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
  * printVersion -  a funtcion that prints version info in elf header
  * @e_ident: hearder information
  * Return: void
  */
void printVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
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
  * printABI - a funtion that prints the ABI info in elf header
  * @e_ident: header information
  * Return: void
  */
void printOSABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
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
			printf("UNIX - Tru64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
  * printABI - a function that prints the ABI version
  * @e_ident: header information
  * Return: void
  */
void printABI(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}
/**
  * printType - a function that prints file head type from elf info
  * @e_type: elf type
  * @e_ident: header information
  * Return: void
  */
void printType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
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
			printf("<unknown: %x>\n", e_type);
	}
}

/**
  * printEntry - a function that prints the entry address of executable
  * from header
  * @e_entry: address of ELF entry point
  * @e_ident: header information
  * Return: void
  */
void printEntry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
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
  * main - entry
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t rd;
	Elf64_Ehdr *ptr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can not be open\n");
		exit(98);
	}
	ptr = malloc(sizeof(Elf64_Ehdr));
	if (ptr == NULL)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: The file can not be read\n");
		exit(98);
	}
	rd = read(fd, ptr, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		close(fd);
		free(ptr);
		dprintf(STDERR_FILENO, "Error: The file can not be read\n");
		exit(98);
	}
	ELFcheck(ptr->e_ident);
	printf("ELF Header:\n");
	printMagic(ptr->e_ident);
	printClass(ptr->e_ident);
	printData(ptr->e_ident);
	printVersion(ptr->e_ident);
	printOSABI(ptr->e_ident);
	printABI(ptr->e_ident);
	printType(ptr->e_type, ptr->e_ident);
	printEntry(ptr->e_type, ptr->e_ident);
	close(fd);
	free(ptr);
	return (0);
}
