#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * to get from one number to another
 * @n: first number input
 * @m: second number input
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbits = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbits++;
	}

	return (countbits);
}
