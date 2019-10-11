#include "holberton.h"
/**
* factorial - retorna el factorial de un numero
* @n: numero
* Return: factorial de n.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
