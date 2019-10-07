#include "holberton.h"

/**
* _strspn - cuenta cuincidencias de accept en s
* @s: origen
* @accept: cadena a comparar
* Return: void.
*/
unsigned int _strspn(char *s, char *accept)
{
	char *a;
	a = s;
	unsigned int cont = 0;

	while (*accept)
	{
		while (*s)
		{
			if (*s == *accept)
			{
				cont++;
			}
			s++;
		}
		s = a;
		accept++;
	}
	return (cont);
}
