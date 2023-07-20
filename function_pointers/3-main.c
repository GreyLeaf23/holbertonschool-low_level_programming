#include "3-calc.h"
#include <stdio.h>

/**
 * main - receive input from user.
 * @argc: amount of arguments.
 * @argv: memory held for arguments.
 *
 * Return: 0.
 */

int main(argc, char *agrv[])
{
	int n1, n2;
	result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (get_op_function(agrv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2] == '/' || argv[2] == '%')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", argv[2],(n1, n2));

return (0);
}
