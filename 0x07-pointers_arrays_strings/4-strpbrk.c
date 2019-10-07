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
				break;
			}
			accept++;
		}
		if (c != 0)
		{
			break;
		}
		accept = a;
		c = 0;
		s++;
	}
	return (s);
}
