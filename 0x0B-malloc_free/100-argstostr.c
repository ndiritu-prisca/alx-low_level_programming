#include "main.h"
#include <stdlib.h>

/**
  * argstostr -a function that concatenates all the arguments
  * of your program.
  * @ac: argument count
  * @av: pointer to 2 dimensional array of strings
  * Return: pointer to concatenated string
  */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 1;
	int k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;

	p = malloc(sizeof(*p) * len);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
