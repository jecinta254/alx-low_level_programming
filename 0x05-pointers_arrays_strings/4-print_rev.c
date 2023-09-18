#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed
 * return: 0
 */
void print_rev(char *s)
{
	int Length = 0;
	int o;

	while (*s != '\0')
	{
		Length++;
		s++;
	}
	s--;
	for (o = Length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

