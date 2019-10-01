#include "holberton.h"

/**
* puts_half - imprime la mitad de la cadena a la que apunta *s
* @str: pointer of string
* Return: Void.
*
*/
void puts_half(char *str)
{
	int i = 0;
	int c;

	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2)
	{
		c = (i - 1) / 2;
	}
	else
	{
		c = i / 2;
	}
	while (*(str + c) != 0)
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
