#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in a linked
 * list_t list.
 * @h:pointer to the head of the list
 * Return: the number of elements of the linked list
 */
size_t list_len(const list_t *h)
{
	int size;

	size = 0;
	while (h != NULL)/*para retornar el número de elementos de la lita,*/
	/*simplemente necesito recorrerla*/
	{
		h = h->next;/*avanzo de nodo a nodo*/
		size++;/*cuento la longitud de la cadena*/
	}
	return (size);
}
