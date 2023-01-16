#include "main.h"

/**
  *_strcmp - a function that compares two strings.
  *@s1: parameter to check
  *@s2: parameter to check
  *Return: difference
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int diff;

	while (s1[i] == s2[n] && s1[i] != '\0' && s2[n] != '\0')
	{
		diff = s1[i] - s2[n];
		i++;
		n++;
	}

	if (s1[i] != s2[n])
		diff = s1[i] - s2[n];

	return (diff);
}
