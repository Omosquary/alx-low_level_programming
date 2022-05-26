#include "lists.h"
#include <stdio.h>
/**
 * listint_len - is a function that counts the elements of a listint_t list
 * @h: is the number input
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}

	return (node);
}
