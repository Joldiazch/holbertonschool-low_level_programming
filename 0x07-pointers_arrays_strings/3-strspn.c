#include "holberton.h"

/**
* _strspn - cuenta cuincidencias de accept en s
* @s: origen
* @accept: cadena a comparar
* Return: void.
*/
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, c2 = 0;
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
		if (c == 0)
		{
			break;
		}
		c2++;
		accept = a;
		c = 0;
		s++;
	}
	return (c2);
}
