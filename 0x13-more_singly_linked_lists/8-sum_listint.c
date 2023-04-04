#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *  function that returns the sum of all the data (n) of a listint_t linked list.
 *
 * sum_listint - adds all the data in a list
 *
 * @head: pointer to the first element of the list
 *
 * Return: sum or NULL if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (head == NULL)
	{
		return (0);
	}
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
