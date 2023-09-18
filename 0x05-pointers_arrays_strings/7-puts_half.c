#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, Length;

	Length = 0;

	for (x = 0; str[x] != '\0'; x++)
		Length++;

	y = (Length / 2);

	if ((Length % 2) == 1)
		y = ((Length + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
