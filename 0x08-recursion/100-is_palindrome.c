#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string.
  * @s: pointer to a string
  * Return: length of string
  */
int _strlen_recursion(char *s);
{
	int len = 0;

	if (*s != '\0')
	{
		len = len + _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}

/**
  * check_palindrome - a function that checks for a palindrome
  * @s: string to be checked
  * @len: length of the string
  * Return: 1 if palindrome, else 0
  */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	else
		return (check_palindrome((s + 1), (len - 2)));
}

/**
  * is_palindrome - a function that returns 1 if a string is a
  *palindrome and 0 if not.
  * @s: string to be checked
  * Return: 1 if palindrome, else 0
  */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (check_palindrome(s, 1));
}
