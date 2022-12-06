#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint -  a function that converts a binary number to an unsigned
  * int.
  * @b: poiter to a string
  * Return: converted number
  * zero if b is NULL or contains a non 0 or non 1 char
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 0;
	const char *s = b;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
			b++;
		else
			return (0);
	}
	b--;
	while (s <= b)
	{
		p = p << 1;
		if (*s == '1')
			p = p + 1;
		s++;
	}
	return (p);
}
