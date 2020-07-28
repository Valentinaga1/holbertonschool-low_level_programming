#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - Function that reverses a listint_t linked list.
 * @head:Pointer to pointer to the first element of a linked list.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *cur;

	if ((*head) != NULL)
	{
		prev = (*head);
		cur = (*head)->next;
		(*head) = (*head)->next;
	}
	prev->next = NULL;/*el primer nodo será el último nodo*/
	while ((*head) != NULL)
	{
		(*head) = (*head)->next;
		cur->next = prev;/*se conencta el nodo actual con prev*/
		prev = cur;
		cur = (*head);/*nodo prev al actual y actual a head*/
	}
	(*head) = prev;/*se hace head el último nodo*/

	return (prev);
}
