#include"main.h"
/**
 * utility - Check if the number is prime or not
 * @n: The number to check
 * @i: divisor
 *
 * Return: 1 if the number is prime 0 otherwise
 */
int utility(int n, int i)
{
	if ((n <= 1) || (i > 1 && n % i == 0))
	{
		return (0);
	}
	if (n / i < i)
	{
		return (1);
	}
	return (utility(n, i + 1));

}
/**
 * is_prime_number - Caller function
 * @n: The number to be checked
 * Return: The result of the check to the main program
 */
int is_prime_number(int n)
{
	return (utility(n, 1));
}
