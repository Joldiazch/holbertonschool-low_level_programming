#include "holberton.h"
/**
* print_sign - verifica si un numero es positivo negativo o cero
*
* @n: this is a number tipe integer.
* Return: 1 if n>0 0 sif n=0 and -1 is n<0
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
