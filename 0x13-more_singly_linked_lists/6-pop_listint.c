#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and returns the head node's data (n)
 *
 * @head: a double pointer
 *
 *Return: empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int g;

	temp = (*head);
	if (*head == NULL)
	{
		return (0);
	}
	temp = *temp->next;
	g = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
