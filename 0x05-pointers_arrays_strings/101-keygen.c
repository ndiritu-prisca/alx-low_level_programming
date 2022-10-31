#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
  *main - Entry
  *a program that generates random valid passwords for the program 101-crackme.
  *Return: 0
  */

int main(void)
{
	int sum = 0;
	char random;

	srand(time(0));

	while (sum <= 2646)
	{
		random = rand() % 128;
		write(1, &random, 1);
		sum = sum + random;
	}

	random = 2772 - sum;
	write(1, &random, 1);
	return (0);
}
