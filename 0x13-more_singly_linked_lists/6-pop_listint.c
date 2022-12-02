#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer address of head of listint_t
 * Return: if list empty, 0 else head node data
 */


int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
