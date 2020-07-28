#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list.
* @h: pointer to the first element of the linked list
 * Return: the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
