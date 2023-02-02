#include "main.h"

/**
  *_strncpy - a function that copies a string.
  *@dest: parameter to check
  *@src: parameter to check
  *@n: parameter to check
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
