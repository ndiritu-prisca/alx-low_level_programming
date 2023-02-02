#include "main.h"

/**
  * _memcpy -  a function that copies memory area. It function copies n bytes
  * from memory area src to memory area dest
  *@dest: 1st memory area
  *@src: second memory area
  *@n: number of bytes to be copied
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
