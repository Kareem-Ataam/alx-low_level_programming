
#ifndef _HEADER_H
#define _HEADER_H
/**
 * struct dog - dog structure that combine three data items
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;
#endif
