#include "main.h"

/**
  *print_alphabet_x10 -prints alphabets 10 times
  *
  *Return: 0
  */

void print_alphabet_x10(void)
{
	char c, c1;

	c1 = '0';
	while (c1 <= '9')
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		c1++;
		_putchar('\n');
	}
}
