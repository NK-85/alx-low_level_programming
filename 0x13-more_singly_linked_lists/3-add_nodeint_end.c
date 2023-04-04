#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end  of a listint_t list
 *
 * @head: head of double pointer
 * @n: integer aa the list
 *
 * Return: address of the new element;
 * or NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = ptr;

	return (ptr);
}
