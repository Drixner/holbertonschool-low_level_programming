#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - singly linked list
 * @h: pointer
 * Return: c
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}
	return (c);
}
