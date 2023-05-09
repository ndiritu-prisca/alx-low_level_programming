#include "search_algos.h"

/**
  * advanced_b_search - a function that recursively searches for a value in a
  * value in a sorted array
  * @array: pointer to the first element of the array to search in
  * @start: the left most index of the array
  * @end: the right most index of the array
  * @value: the value to search for
  * Return: Return: first index where value is located, else return -1
  */
int advanced_b_search(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (end < start)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = start + (end - start) / 2;
	if (array[i] == value && (i == start || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_b_search(array, start, i, value));
	return (advanced_b_search(array, i + 1, end, value));
}

/**
  * advanced_binary - a function that searches for a value in a sorted array
  * of integers
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located, else return -1
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advanced_b_search(array, 0, size - 1, value));
}
