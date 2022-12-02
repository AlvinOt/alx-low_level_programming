#include "lists.h"

/**
 * get_nodeint_at_index - locates node of listint_t
 * @head:pointer to listint_t list head
 * @index: index of node to locate
 * Return: NULL if node is non-existent else located node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
