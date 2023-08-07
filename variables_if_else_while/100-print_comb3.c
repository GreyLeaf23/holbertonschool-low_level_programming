#include <stdio.h>

/**
 * main - print all possible combinations of two digits.
 *
 * Return: Always 0.
 */

int main (void)
{
	int first, second;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			if (first != second && first < second)
			{
				putchar('0' + first);
				putchar('0' + second);
				
				if (first != 8 && second <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
