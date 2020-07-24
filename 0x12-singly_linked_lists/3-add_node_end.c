#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:pointer to pointer to the head of the list
 * @str: data of the linked list
 * Return: retorna el nuevo nodo.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *aux;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	new_node->str = strdup(str);/*ponemos data*/
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)/*en caso de que la lista no exista aún*/
		*head = new_node;/*Asignamos new_node como el head */
	else
	{
		aux = (*head);
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new_node;
	}
	return (new_node);
}
