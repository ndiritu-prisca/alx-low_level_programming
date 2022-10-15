#include <stdio.h>
#include <ctype.h>

/*Print in lower case then upper case*/

/**
  *main - Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char c = 'a';
	char ch = 'A';

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
