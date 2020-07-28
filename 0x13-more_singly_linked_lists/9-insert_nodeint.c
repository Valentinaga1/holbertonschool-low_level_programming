#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index -inserts a new node at a given position.
 * @head: Pointer to pointer to the first element of a linked list
 * @idx:Index of the list where the new node should be added.
 * @n: New data added.
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = (*head);

	if (idx == 0)
	{
		newNode->next = (*head);/*se inserta al inicio. head apuntaría a new*/
		/*y new apuntaría a donde estaba apuntando head*/
		(*head) = newNode;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
		newNode->next = temp->next;
		temp->next = newNode;
		/*Ejm idx 3:temp next apunta a n2 y n2 apunta a newnode y new node apunta*/
		/*al que era n3*/
	return (newNode);
}
