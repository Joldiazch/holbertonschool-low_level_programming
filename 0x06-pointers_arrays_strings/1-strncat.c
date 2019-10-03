#include "holberton.h"

/**
* *_strncat - concatena dos cadenas..
* @dest: destino
* @src: entrada
* @n: numero de bytes
* Return: void.
*
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *k;

	k = dest;
	while (*dest)
	{
		dest++;
	}
	while ((i < n) && (*(src + i) != '\0'))
	{
		*dest = *(src + i);
		dest++;
		i++;
	}
	*dest = '\0';
	dest = k;
	return (dest);
}
