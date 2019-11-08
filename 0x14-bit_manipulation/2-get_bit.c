#include "holberton.h"

/**
* get_bit - print bit in the positioin index.
* @n: decimal number.
* @index: indice.
* Return: bit in the index position.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (!n && !index)
	{
		return (0);
	}
	if (n >> index)
	{
		n = n >> index;
		return (n & 0x1);
	}
	else
	{
		return (-1);
	}
}
