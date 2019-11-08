#include "holberton.h"

/**
* flip_bits - print bit in the positioin index.
* @n: decimal number.
* @m: indice.
* Return: bit in the index position.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long k;
	unsigned int i = 0, nbit = 0;

	k = n ^ m;
	for (i = 0; i <= (sizeof(n) * 8); i++)
	{
		if (k & 1)
		{
			nbit++;
		}
		k = k >> 1;
	}
	return (nbit);
}
