#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node at a given
 * position.
 * @h: node head
 * @idx:index of the list where the new node should be added. Index starts at 0
 * @n:data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int posicion = 1;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;/*Asigno data al nuevo nodo*/
	new_node->next = NULL;/*inicializo nodo*/
	new_node->prev = NULL;/*inicializo nodo*/
	if (h == NULL)
		return (NULL);
	if (idx == 0)/*si index 0, agrego nodo al inicio*/
	{
		add_dnodeint_end(h, n);
		return (new_node);
	}
	else
	{
		temp = *h;
		while (posicion < idx)
		{
			temp = temp->next;
			posicion++;
		}
		new_node->next = temp->next; /*Conecto con el nodo n+1*/
		new_node->prev = temp;/*Conecto con el nodo n-1*/
		temp->next->prev = new_node;/*Conecto n+1 con el nuevo nodo*/
		temp->next = new_node;/*Conecto n-1 con el nuevo nodo*/
	}
	return (new_node);
}
