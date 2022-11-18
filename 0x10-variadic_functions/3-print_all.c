#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_char - a function that prints a character
  * @ap: list to print from
  * Return: nothing
  */
void print_char(va_list ap)
{
	printf("%c", (char) va_arg(ap, int));
}

/**
  * print_int - a function that prints a integer
  * @ap: list to print from
  * Return: nothing
  */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
  * print_float - a function that prints a float
  * @ap: list to print from
  * Return: nothing
  */
void print_float(va_list ap)
{
	printf("%f", (float) va_arg(ap, double));
}

/**
  * print_string - a function that prints a string
  * @ap: list to print from
  * Return: nothing
  */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
  * print_all - a function that prints anything.
  * @format: a list of types of arguments passed to the function
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *s;
	 p_format form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int x = 0;
	int y = 0;

	s = format;
	va_start(ap, format);
	while (format != NULL && *s)
	{
		if (*(form[x]).i == *s)
		{
			if (y)
				printf(", ");
			y = 1;
			form[x].f(ap);
			s++;
			x = -1;
		}
		x++;
		s += (x / 4);
		x %= 4;
	}
	va_end(ap);
	printf("\n");
}
