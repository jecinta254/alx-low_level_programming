#include "main.h"

/**
 * Factorial - A Function That Returns the Factorial of a number
 * @n: The input
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
