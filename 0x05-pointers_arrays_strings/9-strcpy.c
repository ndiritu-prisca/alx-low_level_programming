#include "main.h"

/**
  **_strcpy - a function that copies the string pointed to by src
  *including the terminating null byte (\0)
  *to the buffer pointed to by dest.
  *@dest: parameter to be checked
  *@src: parameter to be checked
  *Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest[i]);
}
