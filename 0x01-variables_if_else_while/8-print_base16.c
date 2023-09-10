#include <stdio.h>
/**
 * main - numbersof base 16 in lowercase are printed out
 * return (0) Always
 */
int main(void)
{
	int N;
	char A;

	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');
	for (A = 'a'; A <= 'f'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
