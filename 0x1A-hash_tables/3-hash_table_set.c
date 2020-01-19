#include "hash_tables.h"

/**
* add_nodeint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @key: key of new node
* @value: value of new node
* Return: pointer to new node.
*
*/
int add_nodeint(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new, *temp = head;

	new = malloc(sizeof(hash_node_t));
	if (!new) /* if new == NULL */
		return (0);

	do {
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new);
			return (1);
		}
		temp = temp->next;
	} while (temp != NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = head;
	/* To the "previus" head, becouse new will be the new head */
	head = new;
	/* new head is new */
	return (1);
}

/**
* hash_table_set - print all elements of a list staring in head.
* @ht: pointer for head of lements.
* @key: key of new node
* @value: value of new node
* Return: 1 if it succeeded, 0 otherwise.
*
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (key == NULL || value == NULL || ht == NULL || strcmp(key, "") == 0)
		return (0);
	if (ht->array == NULL)
		return(0);
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(hash_node_t *));
		ht->array[idx]->key = strdup(key);
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = NULL;
		return (1);
	}
	else
		return (add_nodeint(ht->array[idx], key, value));
}
