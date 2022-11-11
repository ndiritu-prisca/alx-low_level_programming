#include "main.h"
#include <stdlib.h>

/**
  * _calloc - a function that allocates memory for an array, using malloc.
  * @nmemb: number of array elements
  * @size: size of bytes to be allocated
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
