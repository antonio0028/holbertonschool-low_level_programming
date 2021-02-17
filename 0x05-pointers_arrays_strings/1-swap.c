#include "holberton.h"
/**
 * swap_int - pointer address swap
 * @a: int change to b
 * @b: int change to a
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
		*a = *b;
		*b = temp;
}
