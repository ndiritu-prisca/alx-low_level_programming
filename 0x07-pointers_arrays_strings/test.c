#include <stdio.h>

int main(void)
{
	int Var1 = 100;
	int *ptr = &Var1;
	int Var = *ptr;

	printf("%p\n", &Var1);
	printf("%p\n", ptr);
	printf("%d\n", Var);
}
