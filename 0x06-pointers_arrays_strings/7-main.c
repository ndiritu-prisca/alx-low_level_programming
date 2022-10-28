#include "main.h"
#include <stdio.h>

/**
  *main - entry
  *
  *Return: 0
  */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
