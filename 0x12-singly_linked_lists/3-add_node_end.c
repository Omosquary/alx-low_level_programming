#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - is a function that adds a new node at the end of a list
 * @str: is the string input
 * @head: is the pointer to the start of the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;
	unsigned int node = 0;
	char *str2;

	str2 = strdup(str);

	if (str2 == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = str2;
	while (*str2)
	{
		node++;
		str2++;
	}
	new->len = node;
	new->next = 0;

	if (*head == 0)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != 0)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
