#include "holberton.h"
/**
 * print_diagonal - diag and spaces
 *@n: print num of diag lines
 */
void print_diagonal(int n)
{
int line;
int num;

	for (line = 0; line < n; line++)
	{
		for (num = 0; num <= line; num++)
		{
			if (num == line)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
