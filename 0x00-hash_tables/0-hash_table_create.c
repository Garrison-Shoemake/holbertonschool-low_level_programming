#include <stdlib.h>
#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: returns pointer to the hash table created
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t) * size);

	if (hashtable == NULL)
		return (NULL);

	return (hashtable);
}
