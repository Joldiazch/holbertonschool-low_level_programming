#include "holberton.h"
/**
* print_last_digit - retorna el valor absoluto de un nmero
*
* @n: this is a number tipe integer.
* Return: abs the n
*
*/
int print_last_digit(int n)
{
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
