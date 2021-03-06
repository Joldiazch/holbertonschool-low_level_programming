#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - calloc funtion.
 * @min: pointer to string
 * @max: pointer to string
 * Return: void
 */

int *array_range(int min, int max)
{
	int *p;
	int i, a = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		*(p + a) = i;
		a++;
	}
	return (p);
}
