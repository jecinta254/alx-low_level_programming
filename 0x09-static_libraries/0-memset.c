#include "main.h"
/**
 * _memset - Function that fills a block of memory with a specific value
 * @s: starting address of memory to be filled input
 * @b: the desired value input.
 * @n: number of bytes to be changed input
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
