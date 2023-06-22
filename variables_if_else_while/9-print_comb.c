#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 */

int main(void)

{

	int i;

	for (i = 0; i < 16; i++)
		if (i == 9)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
