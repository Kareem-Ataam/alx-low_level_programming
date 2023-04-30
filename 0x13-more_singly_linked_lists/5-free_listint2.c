#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Free all the nodes of a linked list
 * @head: Pointer to the pointer that points to the first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	current = (*head);
	while (current)
	{
		(*head) = current->next;
		current->next = NULL;
		free(current);
		current = (*head);
	}
}
