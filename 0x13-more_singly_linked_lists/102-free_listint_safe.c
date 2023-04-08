#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _ra - it reallocates memory for an array of pointers to the nodes in a linked list.
 *
 * @list: the old list to be be append.
 * 
 * @size: size of the new list (always one more than the old list).
 *
 * @new: new node to add.
 *
 * Return: pointer to the new list.
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new;
	size_t a;

	new = malloc(size * sizeof(listint_t *));
	if (new == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		new[a] = list[a];
	new[a] = new;
	free(list);
	return (new);
}

/**
 * free_listint_safe - a function that frees a listint_t linked list.
 *
 * @head: double pointer.
 *
 * Return: the size of the list that was freed.
 *
 */
size_t free_listint_safe(listint_t **head)
{
        size_t a, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (a = 0; a < num; a++)
		{
			if (*head == list[a])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}

