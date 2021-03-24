#include "lists.h"
/**
 * pop_listint - function name, deletes the first node and returns it's value
 * @head: beginning of the linked list to check
 * Return: returns the value of n before deleting node
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
