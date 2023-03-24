#include<stdio.h>
/**
 * main - Prints the numbers from 0 to 100 but if the number
 * is a multiplier of 3 print Fizz, if muliplier of 5
 * print Buzz, if multiplier of both print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("%s", "Buzz");
				break;
			}
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
