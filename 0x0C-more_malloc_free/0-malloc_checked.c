#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - a function that allocates memory using malloc.
  * @b: parameter to check
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
