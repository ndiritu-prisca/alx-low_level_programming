#include "main.h"

/**
  * print_binary - a function that prints the binary representation of a number
  * @n: integer to be converted to binary
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int j = 0;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		i = i << 1;
		i += n & 1;
		j++;
		n = n >> 1;
	}
	while (i > 0)
	{
		_putchar((i & 1) + '0');
		i = i >> 1;
		j--;
	}
	if (j > 0)
	{
		while (j != 0)
		{
			_putchar('0');
			j--;
		}
	}
}
