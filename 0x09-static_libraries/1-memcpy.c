#include "holberton.h"

/**
* *_memcpy - copies the first n characters of the *src to dest
* @src: origen
* @dest: destino
* @n: n bytes del área de memoria señalada
* Return: void.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n)
	{
		*(dest + i) = *(src + i);
		n--;
		i++;
	}
	return (dest);
}
