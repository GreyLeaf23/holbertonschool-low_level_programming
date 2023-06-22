#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 */

int main(void)

{

	int i;

	for (i = 0; i < 16;)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
