#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - entry
  * Description: a program that adds positive numbers.
  * @argc: argument count
  * @argv: argument vector pointer to array of pointers
  * Return: 0 if successful.
  */

int main(int argc, char *argv[])
{
	int i;
	int j = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (j < argc)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!(isdigit(argv[j][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[j]);
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
