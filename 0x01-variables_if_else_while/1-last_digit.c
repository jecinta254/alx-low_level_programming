#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Entry point
 *This program will assign a random number to the variable n each time it is executed
 * return 0 Always */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	if (l == 0)
	{	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}