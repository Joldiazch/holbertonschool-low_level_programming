#include "holberton.h"
#include <stdio.h>

/**
* *_strcpy - copies pointed src, to the pointed to by dest.
* @dest: pointer to paste
* @src: pointer to copy
* Return: Void.
*
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
