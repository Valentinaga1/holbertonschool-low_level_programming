#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: pointer to the first element of the linked list.
 * Return:the number of nodes of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
