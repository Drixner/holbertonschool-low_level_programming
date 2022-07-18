#include "lists.h"

/**
 * print_listint - imprime todos los elementos de la lista.
 * @h: Address of the head of the list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
		printf("%d\n", h->n);
	return (i);
}
