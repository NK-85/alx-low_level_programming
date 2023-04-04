#include "lists.h"
#include <stdlib.h>

/**
 * function that inserts a new node at a given position
 * @head: pointer to pointer to the first element
 * @idx: index where new element should be added
 * @g: element that should be added.
 * Return: address of new node or NULL
 * 
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *ptr;
	unsigned int b = 0;

	/* assign new node element memory */
	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->g = g;

	if (!head)
	{
		*head = newnode;
	}
	/* comment: pointsd the new node to the next element after the idx element */
	ptr = *head;

	idx--;
	while (idx != b)
	{
		ptr = ptr->next;
		idx--;
	}
	newnode->next = ptr->next;
	ptr->next = newnode;

	return (newnode);
}
