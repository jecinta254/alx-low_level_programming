#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int Length = 0;

	while (*s != '\0')
	{
		Length++;
		s++;
	}

	return (Length);
}
