#include "main.h"

/**
  *rev_string -  a function that reverses a string.
  *line.
  *@s: parameter to check
  *Return:void
  */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		temp = s[i];
		s[i++] = s[len];
		s[len] = temp;
	}
}
