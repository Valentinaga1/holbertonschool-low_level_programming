#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: head node
 * Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
