#include <unistd.h>
#include <stdio.h>

/**
  * _putchar - a function that writes a character to stdout
  * ch: character to be printed
  * Return: 1 on success
  */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
