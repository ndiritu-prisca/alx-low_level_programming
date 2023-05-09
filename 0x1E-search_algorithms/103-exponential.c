#include "search_algos.h"

/**
  * binary_s - a function that searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @start: start index of the array
  * @end: end index of the array
  * @value: value to search for
  * Return: index where value is located, else return -1
  */
int binary_s(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
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

/**
  * exponential_search - a function that searches for a value in a sorted
  * array of integers using the Exponential search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located, else return -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t step, right;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (step = 1; step < size && array[step] <= value; step *= 2)
		{
			printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		}
	}
	if (step < size)
		right = step;
	else
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", step / 2, right);
	return (binary_s(array, step / 2, right, value));
}
