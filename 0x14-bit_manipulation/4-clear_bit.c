#include "holberton.h"

/**
* clear_bit - print bit in the positioin index.
* @n: decimal number.
* @index: indice.
* Return: bit in the index position.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
