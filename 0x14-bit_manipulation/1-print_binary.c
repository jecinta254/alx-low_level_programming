#include "main.h"

/**
 * po_wer - This function calculates (base ^ power)
 * @base: base of the exponent input
 * @power: power of the exponent input
 * Return: value of (base ^ power)
 */
unsigned long int po_wer(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - function that prints a number in binary notation
 * @n: number to print input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = po_wer(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
