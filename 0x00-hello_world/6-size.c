#include<stdio.h>
/**
* main - A program that displays the sizes of the
* different data types
* Return: 0 (Success)
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long));
printf("Size of a long long: %ld byte(s)\n", (unsigned long)sizeof(long long));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

