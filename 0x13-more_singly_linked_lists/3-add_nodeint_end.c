#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - is a function that adds a new node at the end of a list
 * @n: is the number input
 * @head: is the pointer to the start of the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = 0;

	if (*head == 0)
	{
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next != 0)
		{
			node = node->next;
		}
		node->next = new;
	}

	return (new);
}
