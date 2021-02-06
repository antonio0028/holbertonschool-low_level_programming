#include <stdio.h>

/**
 * main - alphabetsoup
 * Return: (0)
 */
int main(void)
{
	int lower;

	for (lower = 97; lower < 123; lower++)
	{
		if (lower == 113 || lower == 101)
			continue;
	putchar(lower);
	}
	putchar('\n');
	return (0);
}
