#include "main.h"

/**
  *_atoi - a function that convert a string to an integer.
  *@s: parameter to be checked
  *Return: 0
  */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int t = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
			sign = (sign * -1);
		if (*s >= 0 && *s <= 9)
		{
			null = 1;
			t = t * 10 + *s - 0;
		}
		else if (null)
			break;
		s++;
	}
	if (sign < 0)
		t = (-t);
	return (t);
}
