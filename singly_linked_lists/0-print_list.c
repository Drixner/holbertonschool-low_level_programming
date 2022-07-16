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
	int i = 0;
	/*mientras el valor a evaluar se distinto a NULL ingrese al bucle*/
	while (h != NULL)
	{
		/*si el caracter es NULL imprime [0] (nill)*/
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
