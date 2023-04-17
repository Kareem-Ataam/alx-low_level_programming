#include"dog.h"
/**
 * init_dog - intialize the data items of a struct dog variable
 * @d: Pointer to the variable to intialize
 * @name: Value to be put in the name  data item
 * @age: Value to be put in the age data item
 * @owner: Value to be put in the owner data item
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
