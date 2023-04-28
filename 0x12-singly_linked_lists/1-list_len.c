#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Calculate the length of a linked list
 * @h: Pointer to the first node of the linked list
 * Return: The length of the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
