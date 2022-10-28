#include "main.h"
#include <stdio.h>

/**
  *main - entry
  *
  *Return: 0
  */

int main(void)
{
	 char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	 char *p;

	 p = rot13(s);
	 printf("%s\n", p);
	 printf("%s\n", s);
	 p = rot13(s);
	 printf("%s\n", p);
	 printf("%s\n", s);
	 p = rot13(s);
	 printf("%s\n", p);
	 printf("%s\n", s);
	 return (0);
}
