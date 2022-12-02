#include "lists.h"

/**
 * sum_listint - calculates sum of dara
 * @head:pointer to head of list
 * Return: if list empty, 0, else sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
