#include "main.h"
/**
 * _isalpha - A Function that checks for alphabetic character
 * @c: the Input character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
