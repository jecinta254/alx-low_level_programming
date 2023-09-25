#include "main.h"
/**
 *_memcpy - A Function which copies memory area
 *@dest: Memory where it is to be Stored
 *@src: Memory where it is being copied
 *@n: Number of Bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
