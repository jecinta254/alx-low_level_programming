#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int z;

	for (z = 0 ; z < 1024 ; z++)
	{
		if (z % 3 == 0 || z % 5 == 0)
			sum = sum + z;
	}
	printf("%d\n", sum);
	return (0);
}
