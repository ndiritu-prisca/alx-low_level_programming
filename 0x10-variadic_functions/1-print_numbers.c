#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_numbers - a function that prints numbers, followed by a new line.
  * @separator: string to be printed between numbers
  * @n: number of integers to be passed in the function
  * @...: other parameters
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list ap;
	unsigned int i;

	s = (char *)separator;
	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(ap, int), s);
		}
		else if (separator == NULL)
			printf("\n");
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
