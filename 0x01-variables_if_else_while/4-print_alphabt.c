#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Print alphabets except q and e*/

/**
  *main - Entry
  *char (ch, RemoveChar)
  *Return: Always 0 (Success)
  */

int main(void)
{
	char ch = 'a';
	char RemoveChar = ch;

	while (ch <= 'z' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}

	while (ch <= 'z' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
