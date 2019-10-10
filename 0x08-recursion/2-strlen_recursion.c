#include "holberton.h"

/**
* _strlen_recursion - imprime el tamaño de un string
* @s: pointer to string
* Return: void.
*/
int _strlen_recursion(char *s)
{
	int c = 1;

	if (*s)
	{
		s++;
		return (c + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
