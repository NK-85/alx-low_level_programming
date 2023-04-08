#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function that  finds the loop in a linked list.
 *
 * @head: double pointer to the beginning of the list.
 *
 * Return: the address of the node where the loop starts or NULL if there's no loop.
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *hare;

	snail = hare = head;

	while (snail && hare && hare->next)
	{
		snail = snail->next;

		hare = hare->next->next;

		if (snail == hare)
		{
			snail = head;
			break;
		}
	}

	if (!snail || !hare || !hare->next)
		return (NULL);

	while (snail != hare)
	{
		snail = snail->next;
		hare = hare->next;
	}

	return (hare);
}
