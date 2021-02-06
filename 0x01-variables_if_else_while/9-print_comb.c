#include<stdio.h>

/**
 * main - numbers,,,
 * Return: 0
 */
int main(void)
{
	int numberz;

	for (numberz = 48; numberz < 58; numberz++)
	{
		putchar(numberz);
		if (numberz < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
