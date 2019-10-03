#include "holberton.h"

/**
* *_strncpy- copies the first n characters of the *src to dest
* @dest: destino
* @src: entrada
* @n: numero de bytes
* Return: void.
*
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;
	char *k;

	k = dest;
	while ((i < n) && (*(src + i) != '\0'))
	{
		*dest = *(src + i);
		dest++;
		i++;
	}
	if (*(src + i) == '\0')
	{
		for (j = i; j < n; j++)
		{
			*dest = '\0';
			dest++;
		}
	}
	dest = k;
	return (dest);
}
