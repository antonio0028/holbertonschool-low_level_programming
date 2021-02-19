#include "holberton.h"
/**
 * _strcat - link 2 strings
 * @dest: s1
 * @src: s2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{

	int num1;
	int num2;

	for (num1 = 0; dest[num1] != '\0'; num1++)
	{
		;
	}
	for (num2 = 0; src[num2] != '\0'; num2++)
	{
		dest[num1] = src[num2];
		num1++;
	}
	dest[num1] = '\0';
	return (dest);
}
