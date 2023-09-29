#include <stdio.h>
#include "main.h"

/**
 * main - A Function that prints the number of arguments passed to the program.
 * @argc: A Number of Arguments.
 * @argv: An Array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
