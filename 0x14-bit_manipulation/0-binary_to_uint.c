#include "main.h"

/**
  * binary_to_uint -  a function that converts a binary number to an unsigned
  * int.
  * @b: poiter to a string
  * Return: converted number
  * zero if b is NULL or contains a non 0 or non 1 char
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p;
	unsigned int value;
	unsigned int num;
	unsigned int sum = 0;
	const char *s = b;

	if (*b == '\0')
		return (0);
	while (*b != '\0')
	{
		b++;
	}
	b--;

	for (p = 0; b >= s; p++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = *b - '0';
		num = value * (1 << p);
		sum = sum + num;
		b--;
	}
	return (sum);
}
