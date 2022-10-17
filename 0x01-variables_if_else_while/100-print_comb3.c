#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*Prints all possible combinations of single-digit numbers*/

/**
  *main -Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	for (int x = 48; x < 57; x++)
	{
		for (int y = x + 1; y <= 57; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);

				if (x == 56 && y == 57)
					continue;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
