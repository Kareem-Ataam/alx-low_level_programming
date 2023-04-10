#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/**
 * check_number - check if the argument passed can be converted to a number
 * @str: Represent the arguments that will be passed
 * Return: (0) if the argument can't be converted to a number (1) otherwise
 */
int check_number(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - Add the numbers passed to the program and print them
 * @argc: Number of arguments passed on the command line
 * @argv: argument vector representing the arguments
 * Return: (0) on sucess
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (check_number(argv[i]))
		{
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%u\n", sum);
	return (0);
}

