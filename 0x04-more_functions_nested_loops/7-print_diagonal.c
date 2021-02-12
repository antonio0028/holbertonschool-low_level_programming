#include "holberton.h"
/**
 * print_diagonal - diag and spaces
 * @n: print num of diag lines
 */
void print_diagonal(int n)
{
	int num;
	int line;

	for (num = 0; num < n; num++)
	{
		for (line = 0; line <= num; line++)
		{
			if (line == num)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		if (n >= 0)
		{
			_putchar('\n');
		}
	}
}
