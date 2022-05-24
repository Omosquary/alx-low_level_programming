#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - is a function that frees the memory of a list
 * @head: is the pointer to the start of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
