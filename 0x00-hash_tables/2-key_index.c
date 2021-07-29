#include <stdlib.h>
#include "hash_tables.h"
/**
* key_index - find a key's index
* @key: key to index
* @size: size of array of hash table
* Return: returns index where to place
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
