#include<stdio.h>

/**
 * main - num-let
 * Return: 0
 */
int main(void)
{
	int numberz;
	int letterz;

	for (numberz = 48; numberz < 58; numberz++)
	{
		putchar(numberz);
	}
	for (letterz = 97; letterz < 103; letterz++)
	{
		putchar(letterz);
	}
	putchar('\n');
	return (0);
}
