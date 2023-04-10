#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
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
		if (strcmp(argv[i], "0") == 0 || atoi(argv[i]))
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

	printf("%d\n", sum);
	return (0);
}

