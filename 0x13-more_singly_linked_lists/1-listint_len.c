#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - Calculate the length of a linked list
 * @h: Pointer to the first node of the linked list
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
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
