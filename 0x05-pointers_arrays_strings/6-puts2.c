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
	int j;

	while (*(str + i) != 0)
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
