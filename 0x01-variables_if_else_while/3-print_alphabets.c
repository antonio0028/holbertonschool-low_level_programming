#include<stdio.h>

/**
 * main - alphABET
 * Return: (0)
 */
int main(void)
{
int lower;
int upper;
for (lower = 97; lower < 123; lower++)
	{
	putchar(lower);
	}
for (upper = 65; upper < 91; upper++)
	{
	putchar(upper);
	}
putchar('\n');

return (0);
}
