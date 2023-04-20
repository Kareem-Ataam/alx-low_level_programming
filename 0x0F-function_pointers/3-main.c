#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"3-calc.h"
/**
 * main - the main function verifies that the
 * operator entered is an allowed operator
 * if not it will print Error and exit with error code
 * it also calls a fucntion called get_op_func that determine the appropriate
 * opertaion based on the operator
 * @argc: Number of arguments passed through the command line interface
 * @argv: Array contating the arguments themselves
 * Return: (0) on success and exit with different error
 * code on failure based on failure reason
 */
int main(int argc, char *argv[])
{
	int (*seletcted_func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (strcmp("+", argv[2]) != 0 && strcmp("-", argv[2]) != 0
			&& strcmp("*", argv[2]) != 0
			&& strcmp("/", argv[2]) != 0 && strcmp("%", argv[2]) != 0)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((strcmp("/", argv[2]) == 0 ||
				strcmp("%", argv[2]) == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	seletcted_func_ptr = get_op_func(argv[2]);
	printf("%d\n", seletcted_func_ptr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
