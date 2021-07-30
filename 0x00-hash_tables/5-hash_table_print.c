#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_print - funciton to hash in djb2 style
* @ht: string to hash
*
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int check = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (check)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			check = 1;
		}
	}
	printf("}\n");
}
