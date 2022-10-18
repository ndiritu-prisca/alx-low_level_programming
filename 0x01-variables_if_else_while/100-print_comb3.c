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
	int x;
	int y;

	x = 48;
	while (x < 57)
	{
		y = x + 1;
		while (y < 58)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				
			}
	 		putchar(44);
			putchar(32);
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
