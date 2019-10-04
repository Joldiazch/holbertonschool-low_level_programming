#include "holberton.h"

/**
* *string_toupper - copies the first n characters of the *src to dest
* @a: destino
* Return: void.
*/
char *string_toupper(char *a)
{
	char *k;
	k = a;
	while (*a)
	{
		if ((*a >= 97) && (*a <= 122))
		{
			*a -= 32;
		}
		a++;
	}
	a = k;
	return (a);
}
