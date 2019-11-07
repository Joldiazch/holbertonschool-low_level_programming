#include "holberton.h"
/**
* printbinary - print all elements of a list staring in head.
* @n: pointer for head of lements.
* Return: int character  to print con putchar.
*
*/
int printbinary(unsigned long int n)
{
	if (n != 1)
	{
		_putchar((printbinary(n >> 1) % 2) + 48);
	}
	return (n);
}
/**
* print_binary - print all elements of a list staring in head.
* @n: pointer for head of lements.
*
*/
void print_binary(unsigned long int n)
{
	(n) ? _putchar((printbinary(n) % 2) + 48) : _putchar('0');
}
