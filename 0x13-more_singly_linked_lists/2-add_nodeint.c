#include "lists.h"
/**
 * add_nodeint - function name, adds node to beginning of the linked list
 * @head: head of the linked list
 * @n: integer to be added to new node
 * Return: returns address to main
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;
	*head = new;

	return (*head);
}
