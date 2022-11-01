#include "main.h"

/**
  * _strstr - a function that locates a substring. It finds the first
  *occurrence of the substring needle in the string haystack. The terminating
  * null bytes(\0) are not compared.
  * @haystack: string to be searched
  * @needle: string with characters needed
  * Return: pointer to the beginning of the located substring, or NULL if the
  * substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0' && *needle != '\0')
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = haystack + 1;
	}
	return ('\0');
}
