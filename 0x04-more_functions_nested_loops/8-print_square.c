#include "holberton.h"
/**
 * print_square - prints # square
 * @size: size of square
 */
void print_square(int size)
{
	int num;
	int squ;

	if (size > 0)
	{
		for (num = 1; num <= size; num++)
		{
			for (squ = 1; squ <= size; squ++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
