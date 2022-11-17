#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: array of integers
  * @size: size of array
  * @cmp:a pointer to the function to be used to compare values
  *
  * Return: -1 if no element matches, if size <=0 return -1, otherwise return
  * index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
