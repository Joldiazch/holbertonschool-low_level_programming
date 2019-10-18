#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatena dos arrays.
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: numero de bytes.
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, m = 0;
	char *p;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (*(s1 + i))
	{
		i++;
	}
	p = malloc(i + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = *(s1 + j);
	}
	for (j = i; j < i + n; j++)
	{
		*(p + j) = *(s2 + m);
		m++;
	}
	j++;
	*(p + j) = '\0';
	return (p);
}
