#include "holberton.h"

/**
* *_strcat - concatena dos cadenas..
* @dest: destino
* @src: entrada
* Return: void.
*
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *k;

	k = dest;
	while (*dest)
	{
		dest++;
	}
	while (*(src + i))
	{
		*dest = *(src + i);
		dest++;
		i++;
	}
	*dest = *(src + i);
	while (dest != k)
	{
		dest--;
	}
	return (dest);
}
