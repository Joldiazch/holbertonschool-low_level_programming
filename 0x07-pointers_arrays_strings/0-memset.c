#include "holberton.h"

/**
* *_memset - copies the first n characters of the *src to dest
* @s: destino
* @b: byte constante b
* @n: n bytes del área de memoria señalada
* Return: void.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n)
	{
		*(s + i) = b;
		n--;
		i++;
	}
	return (s);
}
