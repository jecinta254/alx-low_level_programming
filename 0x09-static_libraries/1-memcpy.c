#include "main.h"
/**
 *_memcpy - A Function that copies memory area
 *@dest: memory where is stored input.
 *@src: memory where is copied input.
 *@n: number of bytes Input.
 *Return: copied memory with n byted changed
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
