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
	int z;

	x = 48;
	while (x < 56)
	{
		y = x + 1;
		while (y < 57)
		{
			z = y + 1;
			while (z < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x < '7' || y < '8' || z < '9')
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
