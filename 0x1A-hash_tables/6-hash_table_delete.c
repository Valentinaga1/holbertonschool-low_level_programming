#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Hash table to detele
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp2;

	if (ht == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			/*se libera de adentro hacia afuera*/
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
