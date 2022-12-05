#include "main.h"

/**
  * power - a function that gets value of base raised to a power
  * @base: base
  * @raise: number to raise to
  * Return: result
  */
unsigned int power(unsigned int base, unsigned int raise)
{
	int res = 1;

	for (; raise > 0; raise--)
		res = res * base;
	return (res);
}

/**
  * binary_to_uint -  a function that converts a binary number to an unsigned
  * int.
  * @b: poiter to a string
  * Return: converted number
  * zero if b is NULL or contains a non 0 or non 1 char
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p, i = 0;
	unsigned int value;
	unsigned int num;
	unsigned int sum = 0;
	const char *s = b;

	if (*b == '\0')
		return (0);
	while (*b != '\0')
	{
		b++;
		i++;
	}
	b--;
	i--;

	for (p = 0; s[p] != '\0'; p++, i--)
	{
		value = s[p] - '0';
		if ((value == 0) || (value == 1))
		{
			num = power(2, i);
			sum = sum + (value * num);
		}
		else
			return (0);
	}
	return (sum);
}
