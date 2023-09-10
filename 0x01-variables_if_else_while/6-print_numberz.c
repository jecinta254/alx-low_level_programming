#include <stdio.h>

/**
 * main - main function
 * return (0) Always
 */

int main(void)
{
	int N;
	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');
	putchar('\n');
	return (0);
}
