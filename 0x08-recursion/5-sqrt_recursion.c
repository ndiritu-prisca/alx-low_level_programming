#include "main.h"

/**
  * find_sqrt - a function that checks whether a number is squareroot
  * of another number
  * @i: number to check whether it is a square
  * @j: number to check whether it is a sqaureroot
  * Return: sqrt, else if not a sqrt return -1.
  */
int find_sqrt(int i, int j)
{
	int sq = j * j;

	if (sq > i)
		return (-1);
	if (sq == i)
		return (j);
	else
		return (find_sqrt(i, j + 1));
}

/**
  * _sqrt_recursion - a function that returns the natural square root of a
  * number.
  * @n: parameter to use
  *Return: natural square root, if none return -1.
  */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
