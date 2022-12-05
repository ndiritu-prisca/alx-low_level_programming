#include "main.h"

/**
  * clear_bit - a function that sets the value of a bit to 0 at a given index
  * @n: pointer to integer
  * @index: index, starting from 0 of the bit you want to set
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	i = i << index;
	*n = (~i & *n);
	return (1);
}
