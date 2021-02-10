#include "holberton.h"

/**
 * _islower - check for lowercase.
 * @c: lowercase
 * Return: 1 if lowercase. Zero if not.
 */
int _islower(int c)
{
	if ((c > 97) && (c < 122))
		return (1);
	else
		return (0);
}
