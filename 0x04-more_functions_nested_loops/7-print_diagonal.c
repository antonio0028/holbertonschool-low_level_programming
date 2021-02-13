#include "holberton.h"
/**
 * print_diagonal - diag and spaces
 * @n: print num of diag lines
 */
void print_diagonal(int n)
{
	int num;
	int line;

	if (n > 0)
	{
		for (num = 1; num <= n; num++)
		{
			for (line = 1; line <= num; line++)
			{
				if (line == num)
				{
					_putchar('\\');
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
