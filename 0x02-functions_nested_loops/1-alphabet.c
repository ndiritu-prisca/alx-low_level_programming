#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  *print_alphabet - prints the alphabet in lowercas
  *
  *Return: Always 0 (Success)
  */

void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	write('\n');
}
