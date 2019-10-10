#include "holberton.h"

/**
* _pow_recursion - retorna el factorial de un numero
* @x: base
* @y: exponente
* Return: x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else
	{
		return (1);
	}
}
