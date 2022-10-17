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

	while (ch <= 'z' && ch != 'e' && ch != 'q')
	{
		continue;
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
