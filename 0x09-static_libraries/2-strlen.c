#include "main.h"
/**
 * _strlen - A Function that returns the length of a string
 * @s: String Value.
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
