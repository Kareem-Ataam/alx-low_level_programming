#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Free all the nodes of a linked list
 * @head: Pointer to the first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (current)
	{
		head = current->next;
		current->next = NULL;
		free(current);
		current = head;
	}
}
