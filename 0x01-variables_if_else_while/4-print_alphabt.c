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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch = 'q')
	{
		RemoveChar;
	}

	while (ch = 'e')
	{
		RemoveChar;
	}
	putchar('\n');

	return (0);
}
