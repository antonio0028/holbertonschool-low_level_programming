#include "holberton.h"

/**
 * _isalpha - check for alphabet.
 * @c: alphabet
 * Return: 1 if alpahbet char. Zero if not.
 */
int _isalpha(int c)
{
if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	return (1);
else
	return (0);
}
