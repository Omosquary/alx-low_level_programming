#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - is a function that deletes the head node of a list
 * @head: is the pointer to the start of the list
 * Return: the head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int node_new;

	if (*head == NULL)
		return (0);
	node = *head;
	node_new = (*head)->n;
	*head = (*head)->next;
	free(node);

	return (node_new);
}
