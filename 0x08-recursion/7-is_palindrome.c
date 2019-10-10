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
* veri - verifica si los caracteres son iguales
* @len: pointer to string
* @i: iterador
* @p: pointer
* Return: void.
*/
int veri(int len, int i, char *p)
{
	if ((*(p + i) == *(p + len)) && (i < len))
	{
		len--;
		i++;
		return (veri(len, i, p));
	}
	else if (i >= len)
	{
		return (1);
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
	int len;

	if (*s == '\0')
	{
		return (1);
	}
	len = _strlen_recursion(s);
	len--;
	return (veri(len, 0, s));
}
