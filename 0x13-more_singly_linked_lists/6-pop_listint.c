#include<stdio.h>
#include <stdlib.h>
#include"lists.h"
/**
 * pop_listint - Delete the first node of the linked list
 * @head: Pointer to the pointer that points to the first node in the list
 * Return: the data part of that node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	current = (*head);
	if (!current)
		return (0);
	(*head) = current->next;
	current->next = NULL;
	data = current->n;
	free(current);
	return (data);
}
