#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_nodeint_at_index - is a function that delets a node in list
 * @head: is the pointer to the start of the list
 * @index: is the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *new_node;
	unsigned int x = 0;

	node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (node != NULL && x < index - 1)
	{
		node = node->next;
		x++;

		if (node == NULL || node->next == NULL)
			return (-1);
	}

	new_node = node->next->next;
	free(node->next);
	node->next = new_node;
	return (-1);
}
