#include"main.h"
/**
 * factorial - Calculate the factorial using recursion
 * @n: The number to calcuate the factorial for
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
