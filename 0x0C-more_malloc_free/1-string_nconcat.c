#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - a function that concatenates two strings.
  * @s1: string one
  * @s2: string 2
  * @n: number of bytes from s2 to be used
  * Return: pointer to concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, tlen;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (len2 <= n)
		k = len2;
	else if (len2 >  n)
		k = n;
	tlen = len1 + k;
	p = malloc(tlen + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < k; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
