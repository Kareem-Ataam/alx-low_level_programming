#include<stdlib.h>
#include<string.h>
#include"3-calc.h"
/**
 * get_op_func - Determine which function to call based on the given operator
 * @s: The given operator
 * Return: Pointer to the appropriate function
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

	i = 0;
	while (i < 5 && strcmp(s, ops[i].op) != 0)
	{
		i++;
	}
	if (i == 5)
	{
		return (NULL);
	}
	return (ops[i].f);
}
