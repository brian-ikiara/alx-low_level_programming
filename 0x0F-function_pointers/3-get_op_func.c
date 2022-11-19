#include "calc.h"

/**
 * get_op_func - Function pointer
 * @s: The operator
 * @a: Num1
 * @b: Num2
 *
 * Description: Selects the functions from an array
 * based on the operator given.
 * Return: ops[i][1].f, the function.
 * On error, stderr.
 */

int ((*get_op_func)(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL,NULL}
	};

	while (i < 5)
	{
		if (*s == ops[i][0])
			return (ops[i][1].f);
		i++;
	}

	return (NULL);
}
