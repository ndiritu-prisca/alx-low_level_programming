#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

/*Print alphabets except q and e*/

/**
  *main - Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
