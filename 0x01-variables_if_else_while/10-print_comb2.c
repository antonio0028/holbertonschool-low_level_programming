#include<stdio.h>

/**
 * main - combo02
 * Return: 0
 */
int main(void)
{
	int numbers;
	int numberzz;

	for (numbers = 48; numbers < 58; numbers++)
	{
		for (numberzz = 48; numberzz < 58; numberzz++)
		{
			putchar(numbers);
			putchar(numberzz);
			if (numbers < 57 || numberzz < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
