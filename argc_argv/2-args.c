#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: Count the arguments.
 * @argv: Hold the arguments.
 *
 * Return: Always 0 (Sucess!)
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);

}
