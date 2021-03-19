#include "lists.h"
#include <string.h>
int _strlen(char *str);


/**
 * *add_node - function name, adds a node to the beginning of the list
 * @head: start of the list, put new list before here
 * @str: string to be added and printed via our print_list
 * Return: returns pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(*head));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;


	return (new->next);
}
/**
 * _strlen - function name, counts a string
 * @str: string to check
 * Return: returns length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
