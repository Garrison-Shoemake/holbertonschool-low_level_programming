#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
* hash_table_get - retreives value with a key
* @ht: hash table to search
* @key: key to find in a hash table
* Return: returns value of found elemtn
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	while (strcmp(key, current->key) != 0)
		current = current->next;

	return (current->value);
}
