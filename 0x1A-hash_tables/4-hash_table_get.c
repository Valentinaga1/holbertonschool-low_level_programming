#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Hash table to add
 * @key:Key value
 * Return: the value associated with the element, or NULL if key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *temp;
	unsigned long int index_key;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	index_key = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index_key];

	while (temp != NULL && temp->key != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
