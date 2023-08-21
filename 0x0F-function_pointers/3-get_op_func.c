#include "3-calc.h"

/**
 * get_op_func - returns pinter to operation
 * @s: operator
 * Return: the right operation
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_ml},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && s && !s[1])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
