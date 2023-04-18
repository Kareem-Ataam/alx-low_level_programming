#include<string.h>
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
	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);
	return (ptr);
}
