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
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(*(argv + 1));
		if (cents <= 0)
			printf("0\n");
		else
		{
			for (coins = 0; cents > 0; coins++)
			{
				if (cents % 25 < cents)
					cents -= 25;
				else if (cents % 10 < cents)
					cents -= 10;
				else if (cents % 5 < cents)
					cents -= 5;
				else if (cents % 2 < cents)
					cents -= 2;
				else if (cents % 1 < cents)
					cents -= 1;
			}
			printf("%d\n", coins);
		}
	}
	return (0);
}
