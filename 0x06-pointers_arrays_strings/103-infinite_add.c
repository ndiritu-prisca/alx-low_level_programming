#include "main.h"

/**
  *infinite_add - a function that adds two numbers.
  *@n1: 1st number
  *@n2: 2nd number
  *@r: buffer that the function will use to store the result
  *@size_r: the buffer size
  *Return: pointer to result
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k;
	char *s1 = n1, *s2 = n2;

	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;

	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[j] = *s1 + i + *s2;
		i = 0;
		if (r[j] > 9)
		{
			i++;
			r[j] = r[j] - 10;
		}
		j++;
		s2--;
		s1--;
		if (size_r == j && (s1 != n1 - 1 || s2 != n2 - 1 || i == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[j] = *s1 + i;
		i = 0;
		if (r[j] > 9)
		{
			i = 1;
			r[j] = r[j] - 10;
		}
		s1--;
		j++;
		if (size_r == j && (s1 != n1 - 1 || i == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[j] = *s2 + i;
		i = 0;
		if (r[j] > 9)
		{
			i = 1;
			r[j] = r[j] - 10;
		}
		s2--;
		j++;
		if (size_r == j && (s2 != n2 - 1 || i == 1))
			return (0);
	}
	if (i == 1)
	{
		r[j] = '1';
		r[j + 1] = 0;
	}
	else
	{
		r[j--] = 0;
	}
	k = 0;
	while (k <= j)
	{
		i = r[j];
		r[j] = r[k];
		r[k] = i;
		j--;
		k++;
	}
	return (r);
}
