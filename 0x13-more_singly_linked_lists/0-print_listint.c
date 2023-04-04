#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 *
 * @h: head of linklist node
 *
 *
 * Return: the number of nodes
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = g;

	while (g != NULL)
	{
		printf("%d\n", g->n);
		g = g->next;
		count++;
	}
	return (count);
}
