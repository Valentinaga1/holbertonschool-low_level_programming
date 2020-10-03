#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: Hash table to add
 * @key:Key value
 * @value:value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t  *temp, *new_node;
	unsigned long int index_key;

	index_key =  key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index_key];

	while (temp != NULL && temp->key != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	if (!new_node->key)
		return (0);
	new_node->value = strdup(value);
	if (new_node->key != NULL && !new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	
	new_node->next = ht->array[index_key];
	ht->array[index_key] = new_node;
	return (1);
}
