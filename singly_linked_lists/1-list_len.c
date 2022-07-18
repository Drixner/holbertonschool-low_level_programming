#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: number of elements in a linked lis
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
