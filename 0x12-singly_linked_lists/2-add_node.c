#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Add a node before the first node of a linked list
 * @head: Pointer to the pointer that points to the first node
 * @str: The data part of the node
 * Return: Pointer to the first node that has been recently added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *result;

	result = strdup(str);
	if (!result)
	{
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
	temp->str = result;
	temp->len = strlen(str);
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
