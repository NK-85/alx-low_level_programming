#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: head pointer to the head node
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
        size_t count = 0;
	const listint_t *g = h;

        while (g != NULL)
        {
        g = g->next;
                count++;
        }
        return (count);
}
