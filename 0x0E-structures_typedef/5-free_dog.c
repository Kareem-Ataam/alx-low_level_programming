#include<stdlib.h>
#include"dog.h"
/**
 * free_dog - free the memory of a dog variale in the heap
 * @d: Pointer to the variable
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
