#include "lists.h"
/**
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		n = tmp->n;
		free(tmp);
		return (n);
	}
	else
		return (0);










}
