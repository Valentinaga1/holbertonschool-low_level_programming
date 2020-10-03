#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table to detele
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *temp;

	if(ht == NULL)
		return;
	i = 0;
	printf("%c", '{');
	while (i < ht->size)
	{
		
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s' , ", temp->key, temp->value);
			temp = temp->next;
		}
		i++;
	}
	printf("%c\n", '}');
}