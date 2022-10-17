#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Print alphabets except q and e*/

/**
  *main - Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'q' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
