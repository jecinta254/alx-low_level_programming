#include <stdio.h>
#include "main.h"

/**
 * main - A Function that Prints all the Arguments it receives.
 * @argc: A Number of Arguments.
 * @argv: An Array of Arguments
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
