#include "main.h"

/**
  *print_most_numbers - function that prints the numbers, from 0 to 9
  *followed by a new line except 2 and 4
  *
  *Return: numbers other than 2 and 4
  */

void print_most_numbers(void)
{
	char c;

	for ( c = '0'; c <= '9'; c++)
	{
		if ((c != '2') || (c != '4'))
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
