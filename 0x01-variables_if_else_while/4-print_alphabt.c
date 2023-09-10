#include <stdio.h>
/**
 * main - main function
 * Return (0) Always
 */

int main(void)
{
	int lowercase = 'a';
while (lowercase <= 'z')
	{
if (lowercase == 'e' || lowercase == 'q')
{
lowercase += 1;
}
else
{
putchar(lowercase);
}
}
putchar ('\n');
return (0);
}
