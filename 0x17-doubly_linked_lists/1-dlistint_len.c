#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;
	if (h == NULL)
		return(0);
	while (h)
	{	
		h = h->next;
		cont++;
	}
	return(cont);
}
