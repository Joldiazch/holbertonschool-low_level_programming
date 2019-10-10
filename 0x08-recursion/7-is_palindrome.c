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

/**
* is_palindrome - retorna la raiz de n
* @s: pinter to string
* Return: .
*/
int is_palindrome(char *s)
{
	int len, i, c = 0;
	char *p;

	p = s;
	if (*s == '\0')
	{
		return (1);
	}
	len = _strlen_recursion(s);
	len--;
	for (i = len; i > len / 2; i--)
	{
		if (*p == *(s + i))
		{
			c++;
		}
		p++;
	}
	len++;
	if (c == len / 2)
	{
		return (1);
	}
	return (0);
}
