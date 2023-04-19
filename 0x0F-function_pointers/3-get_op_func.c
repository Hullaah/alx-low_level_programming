#include "3-calc.h"
/**
 * get_op_func - gets the operation to be performed on a number
 * @s: string that determines the operation to perform
 * Return: pointer to function that performs operation denoted by s
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	if (s)
	{
		i = 0;
		while (i < 5)
		{
			if (ops[i].op[0] == s[0])
				return (ops[i].f);
			i++;
		}
		return (ops[i].f);
	}
	return (ops[i].f);
}
