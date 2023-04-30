#include<stdio.h>
#include <stdlib.h>
#include"lists.h"
/**
 * insert_nodeint_at_index - Insert a node at any given index
 * @head: Pointer to the pointer that points to the first node in the list
 * @idx: The index to insert at
 * @n: The data part of the node to be inserted
 * Return: Pointer to the new inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp;
	size_t count;

	current = (*head);
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = current;
		(*head) = temp;
		return (temp);
	}
	for (count = 0; current && count < idx - 1; count++)
		current = current->next;
	if (!current)
		return (NULL);
	temp->next = current->next;
	current->next = temp;
	return (temp);
}
