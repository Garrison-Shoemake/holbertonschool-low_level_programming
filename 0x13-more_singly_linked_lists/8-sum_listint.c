#include "lists.h"
/**
 * sum_listint - function name, returns sum of linked list nodes
 * @head: head of the list we are checking
 * Return: returns sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
		if (head->next == NULL)
		{
			sum += head->n;
			return (sum);
		}
	}
	return (sum);
}
