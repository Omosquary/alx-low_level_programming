#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - is a function that gets the nth node of a list
 * @head: is the pointer to the start of the list
 * @index: is the number of the node to be returned
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node && x < index)
	{
		node = node->next;
		x++;
	}

	return (node);
}
