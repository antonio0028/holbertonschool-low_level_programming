#include "holberton.h"
/**
 *print_numbers - 1 to 9
 *Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
