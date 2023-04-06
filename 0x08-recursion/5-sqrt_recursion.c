#include"main.h"
/**
 * sqrt_utility - Check if the number has square root or not
 * if there return it otherwise return -1
 * @n: The number to get the square root for
 * @i: helper variable
 *
 * Return: The square root of the variable has one
 * otherwise return -1
 */
int sqrt_utility(int n, int i)
{
	int temp;

	temp = i * i;
	if (temp > n)
	{
		return (-1);
	}
	if (temp == n)
	{
		return (i);
	}
	return (sqrt_utility(n, i + 1));

}
/**
 * _sqrt_recursion - Caller function of the previous function
 * Return: The square root
 * @n: Number to get the square root for
 */
int _sqrt_recursion(int n)
{
	return (sqrt_utility(n, 1));
}
