#include "holberton.h"

/**
* _print_rev_recursion - imprime un string al reves mediante recursividad
* @s: pointer to string
* Return: void.
*/
void _print_rev_recursion(char *s)
{
	char c;

	if (*s)
	{
		c = *s;
		s++;
		_print_rev_recursion(s);
		_putchar(c);
	}
	else
	{
		return;
	}
}
