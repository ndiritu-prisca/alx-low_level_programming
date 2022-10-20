#include "main.h"
#include <stdio.h>

/**
  *main - Entry
  *
  *prints the first 50 Fibonacci numbers, starting with 1 and 2
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	long int i, j, k, com;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		com = j + k;
		j = k;
		k = com;
	}
	return (0)
}
