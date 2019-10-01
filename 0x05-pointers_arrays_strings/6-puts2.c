#include "holberton.h"

/**
* puts2 - imprime los caracteres de *str de dos en dos.
* @str: pointer of string
* Return: Void.
*
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
