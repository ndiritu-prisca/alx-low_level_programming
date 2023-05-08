#include "search_algos.h"

/**
  * interpolation_search - a function that searches for a value in a sorted
  * array of integers using the Interpolation search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: index where value is located, else return -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (size)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
		if (l == h)
			break;
	}
	return (-1);
}
