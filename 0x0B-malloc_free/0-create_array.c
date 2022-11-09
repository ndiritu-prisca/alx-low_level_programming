#include "main.h"
#include <stdlib.h>

/**
  * create_array - a function that creates an array of chars, and
  * initializes it with a specific char.
  * @size: size of array
  * @c: character to be initialized
  * Return: pointer to initialized array.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(*p));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
