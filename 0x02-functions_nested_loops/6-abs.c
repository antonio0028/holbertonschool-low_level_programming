#include "holberton.h"

/**
 *_abs - integer
 *@num: value to inspect
 *Return: num
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
		return (num * -1);
}
