#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Function pointer
 * @s: The operator
 *
 * Description: Selects the functions from an array
 * based on the operator given.
 * Return: ops[i][1].f, the function.
 * On error, stderr.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
