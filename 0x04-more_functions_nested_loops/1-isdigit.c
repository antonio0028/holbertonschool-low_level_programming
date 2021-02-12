#include "holberton.h"

/**
 * _isdigit - check for digits
 * @c: digits
 * Return: 1 if c is a digit. Zero if not.
 */
int _isdigit(int c)
{
return ((c >= 48) && (c <= 57));
}
