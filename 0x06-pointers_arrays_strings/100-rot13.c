#include "main.h"

/**
  *rot13 - a function that encodes a string using rot13.
  *@str: parameter to check
  *Return: encoded string
  */

char *rot13(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
				(str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
		i++;
	}
	return (str);
}
