#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */

int main(void)

{

	int i;

	for (i = 0; i < 16; i++)
		if (i < 10)
	{
		putchar('0' + i);
	}
		else
	{
		putchar('a' + i - 10);
	}

	return (0);
}
