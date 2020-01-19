#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;

    ht = malloc(sizeof(hash_node_t *) * size);
    return (ht == NULL ? NULL : ht);
}