#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*Print all base 16 digit in lower case*/

/**
  *main - Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	int n = '0';
	char ch = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
