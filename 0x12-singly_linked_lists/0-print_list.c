#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 * Return: len of the string
 */
size_t print_list(const list_t *h)
{
	int size;

	size = 0;
	while (h != NULL)/*recorro la lista a partir del nodo dado h que es mi head*/
	{
		if (h->str == NULL)/*If str is NULL, print [0] (nil)*/
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;/*paso de un nodo a otro, hasta encontrar el null*/
		/*y no entrar más en el ciclo*/
		size++;/*incremento la i que es la me recorre la cadena*/
	}
	return  (size);/*Retorno el size que es la que me da el len de la cadena*/
}
