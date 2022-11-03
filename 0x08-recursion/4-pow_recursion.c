#include "main.h"

/**
  * _pow_recursion -a function that returns the value of x raised to the power
  * of y.
  * @x: first integer
  * @y: second integer
  * Return: value of x raised to power of y, if y is less than 0 return -1.
  */
int _pow_recursion(int x, int y)
{
	int res = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		res = x * _pow_recursion(x, y - 1);
	}
	return (res);
}
