#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * linked list.
 * @head:Pointer to pointer to the first element of a linked list.
 * @index:Index of the list where the node should be deleted.
 * Return:1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *prev;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		prev = (*head)->next;
		free((*head));
		(*head) = prev;
		return (1);
	}
		cur = *head;
	for (i = 0; i < (index - 1); i++)
	{
		cur = cur->next;
		if (cur->next == NULL)/*verificar que el sgte nodo exista*/
		return (-1);
	}
	prev = cur->next;
	cur->next = prev->next;
	free(prev);
	return (1);
}
