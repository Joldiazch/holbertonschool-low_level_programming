#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - creates an array of chars.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t = 0, i = 0, k = 0, j, m = 0;
	char *p;
	char *e;

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
	while (*(s2 + k))
	{
		k++;
	}
	if (n > k)
	{
		n = k;
	}
	while (t <= n)
	{
		*(e + t) = *(s2 + t);
		t++;
	}
	*(e + t) = '\0'; 
	p = malloc(i + t + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = *(s1 + j);
	}
	for (j = i; *(e + m); j++)
	{
		*(p + j) = *(e + m);
		m++;
	}
	j++;
	*(p + j) = *(e + m);
	return (p);
}
