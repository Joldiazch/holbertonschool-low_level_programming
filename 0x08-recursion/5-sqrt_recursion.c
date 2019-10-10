#include "holberton.h"

/**
* buscarn - retorna la raiz de n
* @n: numero
* @i: iterador
* Return: iteracion.
*/

int buscarn(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (buscarn((i + 1), n));
}

/**
* _sqrt_recursion - retorna la raiz de n
* @n: numero
* Return: la raiz de n.
*/
int _sqrt_recursion(int n)
{
	return (buscarn(1, n));
}
