#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints list_t elements
 * @h: the list in list_t
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodez = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodez++;
		h = h->next;
	}

	return (nodez);
}
