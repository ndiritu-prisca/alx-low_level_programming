#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry
  * Description: a program that prints its name, followed by a new line.
  * @argc: argument count
  * @argv: argument vector pointer to array of pointers
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
