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

	if (str == NULL)
		return (NULL);

	n = _strlen(str);
	p = malloc(sizeof(*str) * n);

	if (p == NULL)
		return (NULL);
	for (; i < n; i++)
		p[i] = *(str + i);
	return (p);
}
