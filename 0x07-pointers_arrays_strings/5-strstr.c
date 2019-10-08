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
	char *m;
	m = needle;

	if (*needle != '\0')
	{
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
						needle++;
						haystack++;
					}
					else 
					{
						needle = m;
					}
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
	}
	else
	{
		return (haystack);
	}
	return ('\0');
}
