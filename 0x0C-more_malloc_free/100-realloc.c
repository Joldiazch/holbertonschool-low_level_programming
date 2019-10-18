#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - calloc funtion.
 * @ptr: pointer to string
 * @old_size: pointer to string
 * @new_size: size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *k;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (ptr);
	}
	k = (char *)ptr;
	p = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		*(p + i) = *(k + i);
	}
	return (p);
}
