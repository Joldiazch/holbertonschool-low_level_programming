#include "holberton.h"

/**
* *leet - copies the first n characters of the *src to dest
* @s: destino
* Return: void.
*/

char *leet(char *s)
{
	char *k;
	char b[] = "aeotl";
	char c[] = "43071";
	int i = 0;

	k = s;
	while (*s)
	{
		while (b[i])
		{
			if ((*s == b[i]) || (*s == (b[i]) - 32))
			{
				*s = c[i];
			}
			i++;
		}
		i = 0;
		s++;
	}
	s = k;
	return (s);
}
