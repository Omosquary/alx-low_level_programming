#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - is a function that prints all the elements of a list_t list
 * @h: is the string input
 * Return: the number of nodes
 */

size_t print_list(const list_h *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
