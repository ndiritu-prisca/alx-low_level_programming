#include <stdio.h>
#include <stdlib.h>

/**
  * main -entry
  * Description - a program that prints the opcodes of its own main function.
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *ptr;

	ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < (bytes - 1); i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("%02hhx\n", ptr[i]);
	return (0);
}
