#include "3-calc.h"
/**
 * get_op_func - function to get correct operation
 * @s: str pointer
 * Return: a function pointer that takes two ints and return an int
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
	int i = 0;

	while (i < 5)
	{
		if ((*s) == (ops[i].op[0]) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
