#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
  * struct print_format - picks function to use
  * @i: character to check for
  * @f: pointer to function
  */
typedef struct print_format
{
	char *i;
	void (*f)(va_list);
} p_format;

#endif /*VARIADIC_H*/
