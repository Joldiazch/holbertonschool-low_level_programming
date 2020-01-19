#include "hash_tables.h"

/**
* add_nodeint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @key: key of new node
* @value: value of new node
* Return: pointer to new node.
*
*/
hash_node_t *add_nodeint(hash_node_t *head, char *key, char *value)
{
	hash_node_t *temp;

	temp = malloc(sizeof(hash_node_t));
	if (!temp) /* if temp == NULL */
		return (NULL);

	temp->key = key;
	temp->value = value;
	temp->next = head;
	/* To the "previus" head, becouse temp will be the new head */
	head = temp;
	/* new head is temp */
	return (temp);
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

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(hash_node_t *));
		ht->array[idx]->key = (char *) key;
		ht->array[idx]->value = (char *) value;
		ht->array[idx]->next = NULL;
		return (1);
	}
	else if (add_nodeint(ht->array[idx], (char *)key, (char *)value) == NULL)
		return (0);
	else
		return (1);
}
