#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
        size_t a, fig = 0;

        listint_t **list = NULL;

        listint_t *next;

        if (head == NULL || *head == NULL)

                return (fig);

        while (*head != NULL)
        {
                for (a = 0; a < fig; a++)
                {
                        if (*head == list[a])
                        {
                                *head = NULL;
                                free(list);
                                return (fig);
                        }
                }
                fig++;
                list = _ra(list, fig, *head);
                next = (*head)->next;
}
