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
	len = 0;
	i = 0;

	while (s[i++])
		len++;
	for (i = len - 1; i >= len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
