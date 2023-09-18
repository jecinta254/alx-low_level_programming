#include "main.h"
/**
 * puts2 -  a function that prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int Length = 0;
	int s = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		Length++;
	}
	s = Length - 1;
	for (o = 0 ; o <= s ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
