#include "calc.h"
#include <stdio.h>

/**
 * get_op_func - get arithmetic operators.
 * @s: operator.
 *
 * Return: NULL.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[i] = { /*Inspect*/
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};

	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == NULL)
		{
			return (ops[i].f);
		}
	i++
	}

return (NULL);
}
