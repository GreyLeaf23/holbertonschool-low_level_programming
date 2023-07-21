#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - receive input from user.
 * @argc: amount of arguments.
 * @argv: memory held for arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

return (0);
}
