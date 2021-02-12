#include "holberton.h"

/**
 * more_numbers - 0 to 14
 *
 */
void more_numbers(void)
{
	int num;
	int col;

	for (num = 0; num <= 9; num++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			{
				_putchar(col / 10 + '0');
			}
		_putchar(col % 10 + '0');
		}
	_putchar('\n');
	}
}
