#include "holberton.h"

/**
* _puts_recursion - imprime un string mediante recursividad
* @s: pointer to string
* Return: void.
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
