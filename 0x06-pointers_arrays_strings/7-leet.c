#include "main.h"

/**
  *leet -  function that encodes a string into 1337.
  *Letters a and A should be replaced by 4, e and E by 3,
  *o and O by 0, t and T by 7, l and L by 1.
  *@str: parameter to check
  *Return: Encoded string.
  */

char *leet(char *str)
{
	int i = 0, n;
	char sub[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char s[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i])
	{
		for (n = 0; n < 10; n++)
		{
			if (str[i] == s[n])
			{
				str[i] = sub[n];
			}
		}
		i++;
	}
	return (str);
}
