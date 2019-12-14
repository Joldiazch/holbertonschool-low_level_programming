#include "lists.h"
/**
 * free_dlistint - doubly linked list
 * @head: pointer to head of list.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
