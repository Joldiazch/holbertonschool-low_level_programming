#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - calloc funtion.
 * @nmemb: pointer to string
 * @size: pointer to string
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb; i++)
	{
		*(p + i) = 0;

	}
	return (p);
}
