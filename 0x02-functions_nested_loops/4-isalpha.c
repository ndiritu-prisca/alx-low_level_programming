#include "main.h"

/**
  *_isalpha - checks for alphabetic character
  *
  *@c: is the character to check
  *
  *Return: 1 if c is a letter, uppercase or lowercase, otherwise return 0.
  */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
