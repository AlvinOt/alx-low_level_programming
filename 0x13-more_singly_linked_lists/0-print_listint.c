#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints number of elementa
 * @h: pointer to the list's head
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
