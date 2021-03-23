#include "lists.h"
/**
 * free_listint - function name, frees the lists we've made so far
 * @head: head of the lists to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		head = tmp;
		free(tmp);
	}
}
