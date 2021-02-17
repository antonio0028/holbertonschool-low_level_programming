#include "holberton.h"
/**
 * _strlen - check num of strings
 * @s: value to inspect
 * Return: index
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}
	return (index);
}
