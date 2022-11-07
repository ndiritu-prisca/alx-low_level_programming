#include <stdio.h>
#include <stdlib.h>

/**
  * main -entry
  * @argc: argument count
  * @argv: argument vector- pointer to array of pointers
  * Return: 0 success, else -1.
  */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents = cents - 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents = cents - 10;
				coins++;
			}
			else if (cents % 5 < cents)
			{
				cents = cents - 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents = cents - 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents = cents - 1;
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
