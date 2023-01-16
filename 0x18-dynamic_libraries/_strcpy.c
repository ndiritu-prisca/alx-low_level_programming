#include "main.h"

/**
  *_strcpy - a function that copies the string pointed to by src
  *including the terminating null byte (\0)
  *to the buffer pointed to by dest.
  *@dest: parameter to be checked
  *@src: parameter to be checked
  *Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = src[len];
	return (dest);
}
