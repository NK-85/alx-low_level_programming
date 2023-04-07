#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: double pointer.
 * @idx: index where new element should be added
 * @n: new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 * 
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int n;
	listint_t *temp, *copy = *head;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (n = 0; n < idx - 1 && temp != NULL; n++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	
	new->next = temp->next;
	temp->next = new;
	return (new);
}
