#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Get the summation of the data part
 * of all the nodes in the list
 * @head: Pointer to the first node in the list
 * Return: The summation
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	current = head;
	sum = 0;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
