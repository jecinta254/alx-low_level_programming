#include "main.h"
/**
 * leet - A function that Encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int p, q;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (q = 0; q < 10; q++)
		{
			if (n[p] == s1[q])
			{
				n[p] = s2[q];
			}
		}
	}
	return (n);
}
