#include "lists.h"
#include <string.h>
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(*head));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	*head = new;


	return (new->next);
}
