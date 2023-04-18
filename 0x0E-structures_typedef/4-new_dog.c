#include<stdlib.h>
#include"dog.h"
/**
 * new_dog - create a new dog_t variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the variable (Success), NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
