#include "holberton.h"
/**
 * print_line - prints a line
 *@n: num of times line will print
 */
void print_line(int n)
{

	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
