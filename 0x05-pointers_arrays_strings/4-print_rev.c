#include "holberton.h"

/**
* print_rev - determina el tamaño de una cadeta de caracteres..
* @s: pointer of string
* Return: integer con el tamaño de la cadena cuyo pointer is *s.
*
*/
void print_rev(char *s)
{
	int j = 0;

	while (*s != 0)
	{
		s++;
		j++;
	}

	s--;
	j--;

	while (j >= 0)
	{
		_putchar(*s);
		s--;
		j--;
	}
	_putchar('\n');
}
