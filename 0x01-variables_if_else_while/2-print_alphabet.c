#include <stdio.h>
#include <ctype.h>

/*Print alphabet in lower case*/

/**
  *main - Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
