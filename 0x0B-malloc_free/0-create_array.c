#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars.
 * @size: the size of the memory to print
 * @c: character
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (!(size))
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
