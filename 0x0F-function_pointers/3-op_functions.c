#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add -  a function that adds two integers
  * @a: first integer
  * @b: second integer
  * Return: result of the addition
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - a function that gets the difference between two integers
  * @a: first integer
  * @b: second integer
  * Return: result of the difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - a funtcion that multiplies two numbers
  * @a: first integer
  * @b: second integer
  * Return: result of multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a function that divides two numbers
  * @a: first integer
  * @b: second integer
  * Return: result of division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - a function that gets the remainder of a division between two
  * numbers
  * @a: first integer
  * @b: second integer
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
