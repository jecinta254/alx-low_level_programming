#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: o
 */

int main(void)
{
	unsigned long int y;
	unsigned long int A1 = 1;
	unsigned long int A2 = 2;
	unsigned long int x = 1000000000;
	unsigned long int B1;
	unsigned long int B2;
	unsigned long int C1;
	unsigned long int C2;

	printf("%lu", A1);
	for (y = 1; y < 9; y++)
	{
		printf(",%lu", A2);
		A2 += A1;
		A1 = A2 - A1;
	}

	B1 = (A1 / x);
	B2 = (A1 % x);
	C1 = (A2 % x);
	C2 = (A2 % x);

	for (y = 92; y < 99; ++y)
	{
		printf(",%lu", C1 + (C2 / x));
		printf(",%lu", C2 % x);
		C1 = C1 + B1;
		B1 = C1 - B1;
		C2 = C2 + B2;
		B2 = C2 - B2;
	}
	printf("\n");
	return (0);
}
