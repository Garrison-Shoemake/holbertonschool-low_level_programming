#include "lists.h"
/**
 * list_len - function name, counts the lists
 * @h: list to check and count
 * Return: returns the count of lists
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
