#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Free all the nodes of a linked list
 * @head: Pointer to the first node in the list
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current)
	{
		head = current->next;
		current->next = NULL;
		free(current->str);
		free(current);
		current = head;
	}
}
