#include<stdio.h>
/**
 * main - Print the number of argumensts passed to the program
 * @argc: Number of arguments passed on the command line
 * @argv: argument vector representing the arguments
 * Return: (0) on sucess
 */
int main(int argc, char **argv)
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
