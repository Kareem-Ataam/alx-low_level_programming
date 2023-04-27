#include<stdio.h>
#include <stdlib.h>
#include"main.h"
/**
 * print_list - Print all the elments of a linked list
 * @h: Pointer to the first node of the Linked list
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
