#include "main.h"
/**
 *  _abs - computes the absolute value of an integer
 *  @x: parameter function computed
 *  Return: return x or -x;
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	return (0);
}
