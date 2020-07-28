#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a
 * listint_t list.
 * @head: pointer to pointer to the first element of the linked list.
 * @n: data of teh linked list.
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = newNode;
		(*head)->next = NULL;
	}
	else
	{
		newNode->next = (*head);
		(*head) = newNode;
	}
return (newNode);
}
