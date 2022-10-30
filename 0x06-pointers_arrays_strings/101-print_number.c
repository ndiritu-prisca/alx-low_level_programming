#include "main.h"

/**
  *print_number - a function that prints an integer.
  *@n: parameter to be checked
  *Return: void
  */

void print_number(int n)
{
	int x, y, digits, digit, to_power;
	unsigned int t, n2, num;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	else
	{
		t = n;
	}

	num = t;

	while (num >= 10)
	{
		num = num / 10;
		digit++;
	}
	digits = digit + 1;
	to_power = 1;
	x = 1;

	while (x < digits)
	{
		to_power = to_power * 10;
		x++;
	}
	y = to_power;
	while (y >= 1)
	{
		n2 = (t / y) % 10;
		_putchar(n2 + '0');
		y = y / 10;
	}
}
