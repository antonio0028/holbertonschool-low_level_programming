#include "holberton.h"
/**
 *_strncat - concatenates (unites) 2 strings in an array
 *@dest: s1
 *@src: s2
 *@n: number to inspect
 *Return:(dest)
 */
char *_strncat(char *dest, char *src, int n)
{
int index;
int dest_len = _strlen(dest);

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[dest_len + index] = src[index];
	dest[dest_len + index] = '\0';

	return (dest);
}
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
