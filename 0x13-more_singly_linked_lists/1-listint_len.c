#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return no. ofelements in a linked list
 * @h: pointer to linked list head
 * Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
