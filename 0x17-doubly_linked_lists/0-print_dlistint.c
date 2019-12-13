#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_dlistint - doubly linked list
 * @h: integer
 * Description: doubly linked list node structure
 * for Holberton project
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;
	while (h)
	{	
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return(cont);
}
