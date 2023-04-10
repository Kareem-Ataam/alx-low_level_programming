#include<stdio.h>
#include<stdlib.h>
/**
 * main - Multiply two numbers and print the result of multplication
 * The two numbers are passed to the program through the CLI
 * @argc: Number of arguments passed on the command line
 * @argv: argument vector representing the arguments
 * Return: (0) on sucess,  (1) if less than two numbers are passed
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
