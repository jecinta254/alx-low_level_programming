#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int A1 = 1;
	int A2 = 2;
	int y;
	int x = 4000000;
	int sum = 2;

	while (y <= x)
	{
		y = A1 + A2;
		if (y % 2 == 0)
			sum = sum + y;
		A1 = A2;
		A2 = y;
	}
	printf("%d\n", sum);
	return (0);
}
