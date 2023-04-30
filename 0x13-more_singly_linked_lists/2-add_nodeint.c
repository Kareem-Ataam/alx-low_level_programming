#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Add a node before the first node of a linked list
 * @head: Pointer to the pointer that points to the first node
 * @n: The data part of the node
 * Return: Pointer to the first node that has been recently added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
