#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - creates an array of chars.
 * @b: bytes to reserv
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
