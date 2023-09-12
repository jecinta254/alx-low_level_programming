#include "main.h"
/**
 * _isalpha - the fuction checks for alphabets
 *@c: parameter function to be checked
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
