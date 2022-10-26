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
	char *temp = dest;

	while (*src)
		*dest++ = *src++;

	return (temp);
}
