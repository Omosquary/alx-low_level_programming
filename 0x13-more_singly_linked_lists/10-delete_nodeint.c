#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - is a function that delets a node in list
 * @head: is the pointer to the start of the list
 * @index: is the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp, *tmp2;

	tmp = *head;
	while ((tmp->next != NULL) && (x + 1 < index))
	{
		tmp = tmp->next;
		x++;
	}
	if (x + 1 < index)
	{
		tmp2 = tmp->next;
		tmp->next = tmp->next->next;
		free(tmp2);
		return (1);
	}
	return (-1);
}
