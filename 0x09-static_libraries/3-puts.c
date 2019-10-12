#include "holberton.h"

/**
* _puts - imprime una cadena de caracteres..
* @str: pointer of string
* Return: void.
*
*/
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
