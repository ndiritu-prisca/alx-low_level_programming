#include "main.h"
#include <stdio.h>

/**
  *main - Entry
  *
  *Return: 0
  */

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("String one is %s\n", s1);
	printf("String two is %s\n", s2);
	printf("Value of s1[1]: %d\n", s1[1]);
	printf("Value of s2[2]: %d\n", s2[2]);
	printf("Value of s1 in hexadecimal: %p\n", s1);
	printf("Value of s2 in hexadecimal: %p\n", s2);
	return (0);
}
