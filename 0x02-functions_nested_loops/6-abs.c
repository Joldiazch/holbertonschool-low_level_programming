#include "holberton.h"
/**
* _abs - retorna el valor absoluto de un nmero
*
* @n: this is a number tipe integer.
* Return: abs the n
*
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
