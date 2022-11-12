#include "main.h"
#include <stdlib.h>

/**
  * _realloc - void *_realloc(void *ptr, unsigned int old_size, unsigned int
  * new_size)
  * @ptr: pointer to the memory previously allocated with a call to malloc
  * @old_size: size, in bytes, of the allocated space for ptr
  * @new_size: size, in bytes of the new memory block
  * Return: pointer to the new memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *nptr;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	p = ptr;

	for (i = 0; i < old_size; i++)
		nptr[i] = p[i];
	free(ptr);
	return (nptr);
}
