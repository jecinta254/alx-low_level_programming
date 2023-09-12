#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return : retuern 0 or 1 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
