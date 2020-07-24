#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head:pointer to pointer to the head of the list
 * @str: data of the linked list
 * Return: retorna el nuevo nodo.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;/*1 Creo el Nodo que voy a agregar al comienzo de la lista*/
	int size = 0;

	new_node = malloc(sizeof(list_t));/*2do es asignarle memoria al*/
	/*nuevo nodo que voy a agregar*/
	if (new_node == NULL)/*si la asignación falla retorno NULL*/
		return (NULL);

	while (str[size] != '\0')/*Necesito determinar la longitud  de la cadena*/
		size++;
	new_node->str = strdup(str);/*3ro es asignar data a los nodos*/
	/*en este caso Va a ser la copia de la cadena*/
	new_node->len = size;/*Para asignar el dato como la copia de la cedena,*/
	/*necesitamos el tamaño  de la cadena*/
	new_node->next = (*head);/*conecto el nodo para que se enlace con el*/
	/*head de la linkedlist*/
	(*head) = new_node;/*head está apuntando al nuevo nodo, porque se está*/
	/*añadiendo al principio de la lista*/
	return (new_node);
}
