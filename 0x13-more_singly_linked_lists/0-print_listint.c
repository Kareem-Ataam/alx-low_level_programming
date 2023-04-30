#include<stdio.h>
#include <stdlib.h>
#include"lists.h"
/**
 * print_listint - Print all the elments of a linked list
 * @h: Pointer to the first node of the Linked list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
