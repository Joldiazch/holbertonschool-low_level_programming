#include "holberton.h"

/**
* *_strpbrk - cuenta cuincidencias de accept en s
* @s: origen
* @accept: cadena a comparar
* Return: void.
*/
char *_strpbrk(char *s, char *accept)
{
	int c = 0;
	char *a;

	a = accept;
	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				c++;
				return (s);
			}
			accept++;
		}
		accept = a;
		s++;
	}
	return ('\0');
}
