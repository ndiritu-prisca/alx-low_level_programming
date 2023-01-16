#include "main.h"

/**
  *_strcat - a function that concatenates two strings appending
  *the src string to the dest string.
  *@dest: parameter to check
  *@src: parameter to check
  *Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int n;

	while (dest[len] != 0)
		len++;
	for (n = 0; src[n] != 0; n++, len++)
		dest[len] = src[n];

	return (dest);
}
