#include "hash_tables.h"
/**
* hash_table_delete -   deletes a hash table.
* @ht: is the hash table you want to look into
* Return: void.
*
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *tmp2 = NULL;

	if (ht == NULL)
		return;
	for (unsigned long int i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				free(tmp->key);
				free(tmp->value);
				tmp2 = tmp;
				tmp = tmp->next;
				free(tmp2);
			}
		}
	}
	free(ht->array);
	free(ht);
}
