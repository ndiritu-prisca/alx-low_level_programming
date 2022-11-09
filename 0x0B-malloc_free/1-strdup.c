#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
  *_strlen - a function that returns the length of a string.
  *@str: the parameter to check
  *Return: string length
  */
int _strlen(char *str)
{
	int len = 1;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
  * _strdup - a function that returns a pointer to a newly allocated space in
  * memory, which contains a copy of the string given as a parameter.
  * @str: string literal
  * Return:NULL if str = NULL
  * On success, return a pointer to the duplicated string, NULL if insufficient
  * memory
  */
char *_strdup(char *str)
{
	int i = 0;
	int n;
	char *p;

	n = _strlen(str);
	p = malloc(sizeof(*str) * n);
	if (str == 0)
	{
		write(1, &"failed to allocate memory\n", 26);
		return (0);
	}
	else if (str != 0)
	{
		if (p == 0)
			return (0);
		else if (p != 0)
		{
			for (; i < n; i++)
				p[i] = *(str + i);
		}
	}
	return (p);
}
