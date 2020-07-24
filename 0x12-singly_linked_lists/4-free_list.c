#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void function
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
