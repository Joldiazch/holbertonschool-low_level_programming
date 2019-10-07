#include "holberton.h"

/**
* *_strchr - copies the first n characters of the *src to dest
* @s: origen
* @c: caracter
* Return: void.
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
