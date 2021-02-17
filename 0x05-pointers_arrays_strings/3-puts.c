#include "holberton.h"
/**
 * _puts - print a string of char
 * @str: value to inspect
 */
void _puts(char *str)
{
int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
_putchar('\n');
}
