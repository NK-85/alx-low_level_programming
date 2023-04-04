#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * function that returns the nth node of a listint_t linked list.
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first element
 * @index: inded of element to be returned.
 *
 *return: null if node does not exist.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int a = 0;

	ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}

	/* move ptr to the position of index */
	while (ptr)
	{
		if (a == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		a++;
	}

	return (NULL);
}
