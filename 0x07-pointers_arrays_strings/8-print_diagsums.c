#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - a function that prints the sum of the two diagonals of a
  * square matrix of integers.
  * @a: an array of arrays
  * @size: size of array
  * Return: 0
  */
void print_diagsums(int *a, int size)
{
	int n = 0;
	int sum1 = 0, sum2 = 0;
	int sq = size * size;

	while (n < sq)
	{
		if (n % (size - 1) == 0 && n < sq - 1 && n > 0)
			sum2 += *(a + n);
		if (n % (size + 1) == 0 || n == 0)
			sum1 += *(a + n);
		n++;
	}
	printf("%d, %d\n", sum1, sum2);
	
}
