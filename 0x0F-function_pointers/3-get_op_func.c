#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * get_op_func - se;ects appropriate function
  * @s: char pointer
  *
  * Return: pointer to operator function
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

	while (i < 10)
	{
		if (s[0] == ops->op[1])
			break;
		i++;
	}

	return (ops[i /2].f);
}
