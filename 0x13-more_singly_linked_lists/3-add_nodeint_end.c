#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of a linked list
 * @head: Pointer to the pointer that points to the first node
 * @n: The data part of the node
 * Return: Pointer the last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	last = (*head);
	if (!last)
	{
		(*head) = temp;
	}
	else
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (temp);
}
