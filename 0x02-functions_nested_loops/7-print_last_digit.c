#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: function parameter
 * Return: m
 */

int print_last_digit(int)
{
int m;
m = n % 10;
if (n < 0)
	m = -m;
_putchar(m + '0');
return (m);
}
