#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry
  * @argc: argument count
  * @argv: pointer to array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	long int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%ld\n", result);
		return (0);
	}
}
