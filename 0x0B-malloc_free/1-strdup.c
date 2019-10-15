#include <stdlib.h>

/**
 * *_strdup - creates an array of chars.
 * @str: pointer to string.
 * Return: N
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *p;
	int i = 0;

	while (*(str + i))
	{
		i++;
	}
	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(str + i))
	{
		*(p + i) = *(str + i);
		i++;
	}
	*(p + i) = *(str + i);
	return (p);
}
