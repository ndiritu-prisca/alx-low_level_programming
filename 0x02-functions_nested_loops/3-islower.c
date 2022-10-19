#include "main.h"

/**
  *_islower - checks for lowercase
  *
  *@c: is the character to check
  *
  *Return: 1 if c is lowercase, otherwise return 0.
  */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
