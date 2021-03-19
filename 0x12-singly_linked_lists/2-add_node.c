#include "lists.h"
#include <string.h>
/**
 * *add_node - function name, adds a node to the beginning of the list
 * @head: start of the list, put new list before here
 * @str: string to be added and printed via our print_list
 * Return: returns pointer to the new node
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
