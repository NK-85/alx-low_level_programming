#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head: double pointer/.
 *
 * Return: a pointer to the first node of the reversed list.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *next;

	if (head == NULL || *head == NULL)

		return (NULL);

	if ((*head)->next == NULL)

		return (*head);

	before = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;

		(*head)->next = before;

		before = *head;

		*head = next;
	}
	*head = before;

	return (*head);
}
