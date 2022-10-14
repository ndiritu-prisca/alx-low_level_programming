#include <stdio.h>

/**
  *main - Entry point
  *Output sizes
  *Return: Always 0 (Success)
  */

int main(void)
{
	/*Declaration*/
	char charVar;
	int intVar;
	long int longVar;
	long long int long2Var;
	float floatVar;

	/*Statements*/
	printf("Size of a char: %zu byte(s)\n", sizeof(charVar));
	printf("Size of an int: %zu byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longVar));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long2Var));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatVar));
	return (0);
}
