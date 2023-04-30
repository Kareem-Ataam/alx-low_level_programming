#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at any given index
 * @head: Pointer to the pointer that points to the first node in the list
 * @index: The index to insert at
 * Return: (1) on success (-1) on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	size_t count;

	current = (*head);
	if (!current)
		return (-1);
	if (index == 0)
	{
		(*head) = current->next;
		current->next = NULL;
		free(current);
		return (1);
	}
	for (count = 0; current && count < index - 1; count++)
		current = current->next;
	if (!current || !(current->next))
		return (-1);
	temp = current->next;
	current->next = current->next->next;
	/*current->next->next = NULL;*/
	free(temp);
	return (1);
}
