#include "lists.h"
/**
 * insert_nodeint_at_index - funciton name, inserts node at a certain index
 * @head: head of the list to insert node in
 * @idx: index to be added at
 * @n: ***N***formation to put in node... get it?
 * Return: returns address of added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *start;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	if (idx <= 0)
		return (NULL);

	start = *head;

	tmp->n = n;

	while (i < idx - 1)
	{
		*head = (*head)->next;
		i++;
	}
	tmp->next = (*head)->next;
	(*head)->next = tmp;
	*head = start;
	return (tmp);

}
