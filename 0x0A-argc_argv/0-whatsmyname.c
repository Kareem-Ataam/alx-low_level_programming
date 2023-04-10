#include<stdio.h>
/**
 * main - Print the name of the program
 * @argc: Number of arguments passed on the command line
 * @argv: argument vector representing the arguments
 * Return: (0) on sucess
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
