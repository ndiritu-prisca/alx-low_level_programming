#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_strings - a function that prints strings, followed by a new line.
  * @separator: the string to be printed between the strings
  * @n: number of strings passed to the function
  * Return:nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	char *str;
	va_list ap;

	if (separator == NULL)
		sep = "";
	else
		sep = (char *)separator;
	va_start(ap, n);

	if (n > 0)
	printf("%s", va_arg(ap, char *));
	for (i = 1; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s%s", sep, str);
	}
	va_end(ap);
	printf("\n");
}
