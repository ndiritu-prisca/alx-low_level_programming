#include "main.h"

/**
  *_strncat - a function that concatenates two strings
  *it will use at most n bytes from src; and
  *src does not need to be null-terminated if it contains n or more bytes
  *@dest: parameter to check
  *@src: parameter to check
  *@n: parameter to check
  *Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
		dest[len] = src[i];

	dest[len] = '\0';
	return (dest);
}
