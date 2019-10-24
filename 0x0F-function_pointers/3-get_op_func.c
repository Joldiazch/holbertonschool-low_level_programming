#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_op_func - return a integer con el resultado de la operacion indicada.
*
* @s: The operator
* Return: result of operation in the funtion called
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

	while ((ops[i]).op)
	{
		if (*(ops[i]).op == *s)
		{
			return ((ops[i]).f);
		}
		i++;
	}
	return (0);
}
