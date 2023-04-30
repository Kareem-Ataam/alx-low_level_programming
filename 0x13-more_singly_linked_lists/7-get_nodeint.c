#include<stdio.h>
#include <stdlib.h>
#include"lists.h"
/**
 * get_nodeint_at_index - Access the node the given index
 * @head: Pointer to the first node in the list
 * @index: The index of the node that is required
 * Return: Pointer to the required node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;
	listint_t *current;

	current = head;
	for (count = 0; count < index && current; count++)
	{
		current = current->next;
	}
	return (current);
}
