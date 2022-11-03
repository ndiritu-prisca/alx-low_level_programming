#include "main.h"

/**
  * check_prime - a function that checks if a number is prime
  * @i: number to check
  * @j: number to check against
  * Return: 1 if is a prime number, else 0
  */
int check_prime(int i, int j)
{
	if (i < 2)
		return (0);
	if (j * j > i)
		return (1);
	if (i % j == 0)
		return (0);
	else
		return (check_prime(i, j + 1));
}

/**
  * is_prime_number - a function that returns 1 if the input integer is a prime
  * number
  * @n: integer to check
  * Return: 1 if is a prime number, else 0
  */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
