#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -function that deletes the head node of a listint_t linked list.
 * @head: Pointer to pointer to the first element of a linked list.
 * Return:the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;

	delete = (*head);
	(*head) = delete->next;
	free(delete);

	return (delete->n);
}
