#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the head node
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *now;

	while (head != NULL)
	{
		now = head->next;
		free(head);
		head = now;
	}
}
