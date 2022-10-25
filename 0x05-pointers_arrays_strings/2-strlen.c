#include "main.h"

/**
  *_strlen - a function that returns the length of a string.
  *@s: the parameter to check
  *Return: string length
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
