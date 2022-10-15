#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*Output is random, positive or negative*/

/**
  *main - Entry
  *Output - n as positive or negative
  *Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i,", n);
		printf("is positive\n");
	}

	else if (n == 0)
	{
		printf("%i,", n);
		printf("is zero\n");
	}

	else if (n < 0)
	{
		printf("%i", n);
		printf("is negative\n");
	}

	return (0);
}
