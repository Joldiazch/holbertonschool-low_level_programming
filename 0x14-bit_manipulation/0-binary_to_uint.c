#include "holberton.h"
/**
* pow - return the power of base to expo.
* @base: base to power.
* @expo: exponente.
* Return: power.
*
*/
unsigned int poww(unsigned int base, unsigned int expo)
{
	unsigned int i = 0;

	for (i = 1; i < expo; i++)
	{
		base *= 2;
	}
	return (base);
}
/**
* binary - print all elements of a list staring in head.
* @b: pointer for head of lements.
* @len: lengeth of array
* Return: decimal number.
*
*/
unsigned int binary(const char *b, int len)
{
	unsigned int resp = 0, i = 0;

	while (b[i])
	{
		if (b[i] == '1')
		{
			resp += poww(2, (len - i - 1));
		}
		i++;
	}
	return (resp);
}
/**
* binary_to_uint - print all elements of a list staring in head.
* @b: string with 0 and 1 characteres.
* Return: decimal number.
*
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len;

	if (b)
	{
		while (b[i])
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			i++;
		}
		len = i;
		i = 0;
		if (b[0] == '0')
		{
			return (binary_to_uint(&b[1]));
		}
		else
		{
			return (binary(b, len));
		}
	}
	return (0);
}
