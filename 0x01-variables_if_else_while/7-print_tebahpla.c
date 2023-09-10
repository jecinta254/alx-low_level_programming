#include <stdio.h>

/**
 * main - main function
 * return (0) Always
 */

int main(void)
{
	char alphabet;
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
