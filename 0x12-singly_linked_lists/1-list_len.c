#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - is a function that counts the elements of a list_t file
 * @h: is the string input
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
