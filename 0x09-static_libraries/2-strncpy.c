#include "main.h"
/**
 * _strncpy - A  Function that will Copy a string
 * @dest: Input Value
 * @src: Input Value
 * @n: Input Value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
