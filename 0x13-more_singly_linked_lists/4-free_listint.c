#include "lists.h"

/**
 * free_listint - free em boy
 * @head: pointer to listint_t head
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
