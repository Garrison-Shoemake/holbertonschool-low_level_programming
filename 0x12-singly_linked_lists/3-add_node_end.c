#include "lists.h"
#include <string.h>
int _strlen(char *str);
/**
 * add_node_end - function name, adds node at the end of list
 * @head: head of the linked list
 * @str: string to print for list
 * Return: returns address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

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
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (new);
}
/**
 * _strlen - funciton name, counts string
 * @str: string to check
 * Return: returns value of the strings length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
