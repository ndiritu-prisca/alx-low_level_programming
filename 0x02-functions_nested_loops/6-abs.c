#include "main.h"

/**
  *_abs - computes absolute value of an integer
  *
  *@abs: -interger input
  *
  *Return: return absolute value of abs.
  */

int _abs(int abs)
{
	return (abs * ((abs > 0) - (abs < 0)));
}
