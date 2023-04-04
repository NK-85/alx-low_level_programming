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
	listint_t *start;
	int g;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	g = start->g;
	free(start);
	return (g);
