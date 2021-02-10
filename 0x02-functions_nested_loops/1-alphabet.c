#include "holberton.h"

/**
 * main - print abc lowercase
 *
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a' ; abc <= 'z' ; abc++)
		_putchar(abc);
	_putchar('\n');
}
