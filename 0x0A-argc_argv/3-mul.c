#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry
  * Description: a program that multiplies two numbers.
  * @argc: argument count
  * @argv: argument vector pointer to array of pointers
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int res = 0;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
