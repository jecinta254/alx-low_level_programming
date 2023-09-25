#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting Address of the memory being filled
 * @b: Desired value.
 * @n: number of bytes being changed
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
