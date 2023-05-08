#include "search_algos.h"

/**
  * binary_search - a function that searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: index where value is located, else return -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end, i;

	if (array == NULL)
		return (-1);

	for (start = 0, end = size - 1; start <= end;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
