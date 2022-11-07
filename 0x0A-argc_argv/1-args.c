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
	printf("%d\n", argc - 1);
	*argv += 1;
	return (0);
}
