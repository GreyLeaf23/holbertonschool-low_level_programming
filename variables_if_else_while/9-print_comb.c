#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 */

int main(void)

{

	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');
	return (0);
}
