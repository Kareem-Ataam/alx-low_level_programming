#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - A program that prints the last digit of a randomly generated
* number
* Return: 0 (Success)
*/
int main(void)
{
	int n;
	int temp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	temp = n;
	n = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", temp, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", temp, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less  than 6 and not 0\n", temp, n);
	}


	return (0);
}
