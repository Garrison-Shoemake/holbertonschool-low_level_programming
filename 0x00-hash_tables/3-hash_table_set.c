#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
* hash_table_set - find a key's index
* @key: key to index
* @ht: hash table to have k/v added to
* @value: value ot be stored in the index
* Return: returns 1 if success and 0 if not
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	hash_node_t *tmp;
	unsigned long int index = 0;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = malloc(sizeof(hash_node_t));

	if (current == NULL)
		return (0);

	current->key = strdup(key);
	current->value = strdup(value);
	current->next = NULL;
	tmp = ht->array[index];

	if (tmp && strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = current->value;
		free(current->key);
		free(current);
		return (1);
	}
	current->next = ht->array[index];
	ht->array[index] = current;
	return (1);
}
