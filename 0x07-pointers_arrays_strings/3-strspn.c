#include "main.h"

/**
  * _strspn - a function that gets the length of a prefix substring.
  *@s: the string
  *@accept: the characters to check for
  *Return: number of bytes in the initial segment of s which consist only of
  *bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (n);
	}
	return (n);
}
