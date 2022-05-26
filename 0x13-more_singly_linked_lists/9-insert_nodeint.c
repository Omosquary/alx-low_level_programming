#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - is a function that inserts node in list
 * @head: is the pointer to the start of the list
 * @idx: is the index of the node to be inserted
 * @n: is the data to be inserted
 * Return: nth node of the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new;
	unsigned int x = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (head)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		else
		{
			node = *head;
			while (node && x < idx - 1)
			{
				node = node->next;
				x++;
			}
			while (node)
			{
				new->next = node->next;
				node->next = new;
				return (new);
			}
		}
	}

	free(new);
	return (NULL);
}
