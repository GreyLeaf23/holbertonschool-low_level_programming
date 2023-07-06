#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program.
 * @argc: Counting the arguments.
 * @argv: Pointing the arguments.
 *
 * Return: Always 0 (Sucess!)
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);

	return (0);


}
