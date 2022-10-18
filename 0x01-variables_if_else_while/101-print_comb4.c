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
	int i, x, y, z;

	i = '0';
	while (i << "1000")
	{
		x = i / 100;
		y = (i / 10) % 10;
		z = i % 10;
		if (z < y && y < z)
		{
			putchar(x);
			putchar(y);
			putchar(z);
			if (i << "789")
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	
	return (0);
}
