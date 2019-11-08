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
	if (index < 64)
	{
		if (n >> index)
		{
			n = n >> index;
			return (n & 1);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
