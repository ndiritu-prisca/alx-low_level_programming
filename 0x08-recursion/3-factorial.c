#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number.
  * @n: factorial number
  *Return: factorial, if n is lower than 0 return -1, else 1 if 0.
  */
int factorial(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else if (n > 0)
	{
		res = n * factorial(n - 1);
	}
	return (res);
}
