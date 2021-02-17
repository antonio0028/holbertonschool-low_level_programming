#include "holberton.h"
/**
 * rev_string - print string in rev
 * @s: value to inspect
 */
void rev_string(char *s)
{
	int index;
	int temp = 0;
	char swap;
	int num = 0;

	while (s[temp] != '\0')
	{
		temp++;
	}

	for (index = (temp - 1); index >= (temp / 2); index--)
	{
		swap = s[num];
		s[num] = s[index];
		s[index] = swap;
		num++;
	}

}
