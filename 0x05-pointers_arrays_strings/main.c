#include <stdio.h>

/**
  *modif_my_char_var - Solve me
  *
  *Return: nothing.
  */

void modif_my_char_var(char *cc, char ccc)
{
	printf("Address of 'cc': %p\n", &cc);
	printf("Value of 'cc': %p\n", cc);
	*cc = 'o';
	ccc = '1';
}

/**
  *main - Solve me
  *
  *Return: Always 0
  */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c' before the call: %d('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c' after the call: %d('%c')\n", c, c);
	return (0);
}
