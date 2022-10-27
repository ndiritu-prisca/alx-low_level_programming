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
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
