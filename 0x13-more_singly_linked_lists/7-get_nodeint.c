#include "lists.h"
/**
 * get_nodeint_at_index - function name, gets information from the node
 * @head: head of the linked list to go through
 * @index: index to retieve from
 * Return: return index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	while (head)
	{
		if (head != NULL)
		{
			for (i = 0; i < index; i++)
				head = head->next;
			return (head);
		}
		else
			return (NULL);
	}
	return (NULL);
}
