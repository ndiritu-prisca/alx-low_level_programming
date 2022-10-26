#include "main.h"
#include <stdio.h>

/**
  *print_array - a function that prints n elements of an array of integers,
  *followed by a new line.
  *@a: parameter to check
  *@n: number of elements in array
  *Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
