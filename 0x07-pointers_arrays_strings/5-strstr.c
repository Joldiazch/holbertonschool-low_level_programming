#include "holberton.h"

/**
* *_strstr - cuenta cuincidencias de accept en s
* @haystack: origen
* @needle: cadena a comparar
* Return: char.
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, cont = 0;
	char *k;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			k = haystack;
			while (*needle)
			{
				if (*needle == *haystack)
				{
					cont++;
				}
				needle++;
				haystack++;
				i++;
			}
			if (cont == i)
			{
				return (k);
			}
			haystack = k;
		}
		haystack++;
	}
	if (*haystack == '\0')
	{
		return (haystack);
	}
	return ('\0');
}
