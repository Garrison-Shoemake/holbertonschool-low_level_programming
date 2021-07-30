#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_delete - funciton to hash in djb2 style
* @ht: string to hash
*
*/
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current;
    hash_node_t *tmp;
    unsigned long int index;

    for (index = 0; index < ht->size; index++)
    {
        current = ht->array[index];
        while (current)
        {
            tmp = current;
            current = current->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }
    free(ht->array);
    free(ht);
}