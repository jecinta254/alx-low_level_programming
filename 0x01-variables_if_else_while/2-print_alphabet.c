#include <stdio.h>

/**
 * main - Prints the alphabet.
 * Return: Return 0 (Success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	int z;

	for
		(z = 0; z < 26);
	{
	putchar(alp[z]);
		z++;
	}
	putchar('\n');
	return (0);
}
