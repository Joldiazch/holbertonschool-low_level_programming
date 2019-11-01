#include "lists.h"
/**
* free_list - function that adds a new node at the end of a list_t list..
* @head: pointer to pointer to head of lements.
* Description: singly linked list node structure
* for Holberton project
*/
void free_list(list_t *head)
{
	/*list_t *temp, *headTemp;*/

	if (head->next)
	{
		free_list(head->next);
	}
	free(head);
}
