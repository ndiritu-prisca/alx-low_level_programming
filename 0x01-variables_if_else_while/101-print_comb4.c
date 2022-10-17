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
	int x, y, z;

	for (x = '0'; x < '8'; x++)
	{
		for (y = x + '1'; y < '9'; y++)
		{
			for (z = y + '1'; z <= '9'; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	
	return (0);
}
