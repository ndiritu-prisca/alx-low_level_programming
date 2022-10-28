#include "main.h"

/**
  *cap_string - a function that capitalizes all words of a string.
  *@str: parameter to check
  *Return: capitalized words
  */

char *cap_string(char *str)
{
	int i, n;
	char sp[] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((str[0] >= 97) && (str[0] <= 122))
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; sp[n] != '\0'; n++)
		{
			if (str[i] == sp[n])
			{
				if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
