#include "holberton.h"

/*
 *print_alphabet_x10 - print abc x10
 *
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char abc;

	while (num++ < 10)
	{
		for (abc = 'a' ; abc <= 'z' ; abc++)
		_putchar(abc);
		_putchar('\n');
	}
}
