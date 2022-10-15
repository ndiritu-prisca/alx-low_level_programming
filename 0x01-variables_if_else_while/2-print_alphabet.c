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
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	}

	return (0);
}
