#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: return 0
 */
int main(void)
{
	unsigned long int A1 = 1;
	unsigned long int A2 = 2;
	int a;
	int b;
	printf("%lu, ", A1);
	for (b = 1 ; b < 50 ; b++)
	{
		printf("%lu", A2);
		a = A1 + A2;
		A1 = A2;
		A2 = a;
	}
	printf("\n");
	return (0);
}
