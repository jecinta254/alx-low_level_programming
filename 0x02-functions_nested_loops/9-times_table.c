#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * return: o
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			result = x * y;
			if (y == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (y != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
