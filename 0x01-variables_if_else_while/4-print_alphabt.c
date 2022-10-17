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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
