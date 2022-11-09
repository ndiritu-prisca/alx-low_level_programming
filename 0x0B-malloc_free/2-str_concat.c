#include "main.h"
#include <stdlib.h>

/**
  *str_concat - a function that concatenates two strings.
  *@s1: pointer to string 1
  *@s2: pointer to string 2
  *Return: a pointer to a newly allocated space in memorey of
  *concatenated string. On failure return NULL.
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != 0)
		len1++;
	while (s2[len2] != 0)
		len2++;

	p  = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * len2 + 1));

	/*malloc validation*/
	if (p == NULL)
		return (NULL);
	else if (p != NULL)
	{
		for (; i < len1; i++)
			p[i] = s1[i];
		for (; j < len2; j++, i++)
			p[i] = s2[j];
		p[i] = '\0';
	}
	return (p);
}
