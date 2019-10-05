#include "holberton.h"

/**
* *rot13 - copies the first n characters of the *src to dest
* @s: destino
* Return: void.
*/
char *rot13(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if ((*(s + i) >= 'a' && *(s + i) <= 'm') ||
		(*(s + i) >= ('a' - 32) && *(s + i) <= ('m' - 32)))
		{
			*(s + i) += 13;
		}
		else if ((*(s + i) >= 'n' && *(s + i) <= 'z') ||
		(*(s + i) >= ('n' - 32) && *(s + i) <= ('z' - 32)))
		{
			*(s + i) -= 13;
		}
		i++;
	}
	return (s);
}
