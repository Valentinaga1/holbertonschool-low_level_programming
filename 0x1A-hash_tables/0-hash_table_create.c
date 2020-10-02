#include "hash_tables.h"
/**
 *  hash_table_create - function that creates a hash table.
 *  @size:  is the size of the array
 *  Return: the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	if (!size)
		return (0);
	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (0);
	new_ht->size = size;

	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);
}
