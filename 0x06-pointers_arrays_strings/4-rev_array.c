#include "holberton.h"
/**
 * reverse_array - integers forwards and backwards
 * @a: pointer from main
 * @n: num of elements in array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int first;

	n = n - 1;

	for (first = 0; first <= n; first++)
	{
		temp = a[first];
		a[first] = a[n];
		a[n] = temp;
		n--;
	}
}
