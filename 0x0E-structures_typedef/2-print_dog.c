#include<stdio.h>
#include"dog.h"
/**
 * print_dog - Print the items of the dog variable
 * @d: The dog variable to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (!d->name)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (!d->owner)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
