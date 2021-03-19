#include "lists.h"
/**
 * free_list - function name, frees space made for list_
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;

		free(head->str);

		head = head->next;

		free(tmp);

		
	}
}
