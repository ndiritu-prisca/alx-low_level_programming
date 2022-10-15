#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*Assign random value and print last digit*/

/**
  *main - Entry
  *Output - last digit
  *Return: Always 0 (Success)
  */

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %i", n);
		printf(" is %i", d);
		printf(" and is greater than 5\n");
	}

	else if (d == 0)
	{
		printf("Last digit of %i", n);
		printf(" is %i", d);
		printf(" and is 0\n");
	}

	else if (d > 6, d != 0)
	{
		printf("Last digit of %i", n);
		printf(" is %i", d);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
