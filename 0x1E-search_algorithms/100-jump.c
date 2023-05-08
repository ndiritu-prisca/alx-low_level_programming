#include "search_algos.h"

/**
  * jump_search - a function that searches for a value in a sorted array of
  * integers using the Jump search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: index where value is located, else return -1
  */
int jump_search(int *array, size_t size, int value)
{
	size_t x, start = 0, end = sqrt(size);

	if (array == NULL)
		return (-1);
	for (x = 0; start < size && array[start] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		x = start;
		start = start + end;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, start);

	if (start < size - 1)
		start = start;
	else
		start = size - 1;
	for (; x < start && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	if (array[x] == value)
		return (x);
	return (-1);
}
