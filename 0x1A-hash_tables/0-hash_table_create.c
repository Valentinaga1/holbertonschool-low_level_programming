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
		return (NULL);
	/*cuanod creamos la tabla no sabemos cuanta dta tiene, pero cuando*/
	/*creamos el array ya sabemos*/
	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);
	/*es más optimo que usar malloc, porque necesitaríamos un for para*/
	/*iniciliazar */
	new_ht->size = size;
	new_ht->array = calloc(sizeof(hash_node_t *), new_ht->size);
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}

	return (new_ht);
}
