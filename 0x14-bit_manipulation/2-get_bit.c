#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at a given index
  * @n: integer to be converted to bit
  * @index: is the index, starting from 0 of the bit you want to get
  * Return: value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	/*validate if index is greater than the unsigned bits*/
	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	i = i << index;
	if (i & n)
		return (1);
	else
		return (0);
	return (-1);
}
