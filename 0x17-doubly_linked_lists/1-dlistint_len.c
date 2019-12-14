#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pinter to header of list
 * Return: number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
