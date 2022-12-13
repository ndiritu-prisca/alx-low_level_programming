#include "main.h"
#include <elf.h>

/**
  * printClass - a function that prints the class of elf header
  * @ptr: header information
  * Return: void
  */
void printClass(char *ptr)
{
	printf("  %-35s", "Class:");
	if (ptr[4] == 1)
		printf("ELF32\n");
	else if (ptr[4] == 2)
		printf("ELF64\n");
	else
		printf("<unknown: %02hx>", ptr[4]);
}

/**
  * printData - a funtion that prints data of elf header
  * @ptr: header information
  * Return: void
  */
void printData(char *ptr)
{
	printf("  %-35s", "Data:");
	if (ptr[5] == 1)
		printf("2's complement, little endian\n");
	else if (ptr[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02hx>", ptr[5]);
}

/**
  * printVersion -  a funtcion that prints version info in elf header
  * @ptr: hearder information
  * Return: void
  */
void printVersion(char *ptr)
{
	printf("  %-35s", "Version:");
	if (ptr[6] <= EV_CURRENT)
	{
		printf("%d", ptr[6]);
		if (ptr[6] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
	else
		printf("49 <unknown %%lx>");
}

/**
  * printABI - a funtion that prints the ABI info in elf header
  * @ptr: header information
  * Return: void
  */
void printABI(char *ptr)
{
	printf("  %-35s", "OS/ABI:");
	if (ptr[7] == 0)
		printf("UNIX - System V\n");
	else if (ptr[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (ptr[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (ptr[7] == 3)
		printf("UNIX - Linux\n");
	else if (ptr[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (ptr[7] == 6)
		printf("UNIX - Solaris\n");
	else if (ptr[7] == 7)
		printf("UNIX - AIX\n");
	else if (ptr[7] == 8)
		printf("UNIX - IRIX\n");
	else if (ptr[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (ptr[7] == 10)
		printf("UNIX - Tru64\n");
	else if (ptr[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (ptr[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (ptr[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (ptr[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (ptr[7] == 15)
		printf("UNIX - AROS\n");
	else if (ptr[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (ptr[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02x>\n", ptr[7]);
	printf("  %-35s%d\n", "ABI Version:", ptr[8]);
}

/**
  * printType - a function that prints file head type from elf info
  * @ptr: header information
  * Return: void
  */
void printType(char *ptr)
{
	int n;

	if (ptr[5] == 1)
		n = 16;
	else
		n = 17;
	printf("  %-35s", "Type:");
	if (ptr[n] == 1)
		printf("REL (Relocatable file)\n");
	else if (ptr[n] == 2)
		printf("EXEC (Executable file)\n");
	else if (ptr[n] == 3)
		printf("DYN (Shared object file)\n");
	else if (ptr[n] == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>: %02x%02x\n", ptr[16], ptr[17]);
}

/**
  * printEntry - a function that prints the entry address of executable
  * from header
  * @ptr: header information
  * Return: void
  */
void printEntry(char *ptr)
{
	int x, y;

	printf("  %-35s0x", "Entry point address:");
	if (ptr[4] == 2)
		y = 0x1f;
	else
		y = 0x1b;
	if (ptr[5] == 1)
	{
		x = y;
		while (ptr[x] == 0 && x > 0x18)
			x--;
		printf("%x", ptr[x--]);
		while (x >= 0x18)
			printf("%02x", (unsigned char) ptr[x--]);
		printf("\n");
	}
	else
	{
		x = 0x18;
		while (ptr[x] == 0)
			x++;
		printf("%x", ptr[x++]);
		while (x <= y)
			printf("%02x", (unsigned char) ptr[x++]);
		printf("\n");
	}
}

/**
  * main - entry
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int fd, i;
	ssize_t rd;
	char ptr[32];

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
	rd = read(fd, ptr, 32);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can not be read\n");
		exit(98);
	}
	if (ptr[0] != 0x7f || ptr[1] != 'E' || ptr[2] != 'L' || ptr[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: It is not an ELF\n");
		exit(98);
	}
	printf("ELF Header:\n  Magic:  ");
	for (i = 0; i < 16; i++)
		printf("%02x ", (unsigned int) ptr[i]);
	printf("\n");
	printClass(ptr);
	printData(ptr);
	printVersion(ptr);
	printABI(ptr);
	printType(ptr);
	printEntry(ptr);
	close(fd);
	return (0);
}
