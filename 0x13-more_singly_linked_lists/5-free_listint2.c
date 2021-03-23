#include "lists.h"
/**
 * free_listint2 - function name, frees a null head
 * @head: head of the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
