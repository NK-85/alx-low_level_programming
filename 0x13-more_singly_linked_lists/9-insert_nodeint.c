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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int i)
{
	unsigned int i;
	listint_t *temp, *new = *head;

	 new = malloc(sizeof(listint_t));

        if (new == NULL)
                return (NULL);

        new->i = i;

        if (idx == 0)
        {
                new->next = copy;
                *head = new;
                return (new);
        }

        new->next = temp->next;
        temp->next = new;

        return (new);

	if (head == NULL)

		return (NULL);
	
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)

			return (NULL);
	}
}
