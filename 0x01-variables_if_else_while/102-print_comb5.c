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
	int a;
	int b;
	int c;
	int d;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			d = b + 1;
			c = a;
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < '9' || b < '8' || c < '9' || d < '9')
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				d = '0';
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
