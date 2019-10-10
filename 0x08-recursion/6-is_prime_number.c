#include "holberton.h"

/**
* buscard - retorna la raiz de n
* @num: numero
* @div: divisor
* Return: 0 no primo 1 primo.
*/

int buscard(int num, int div)
{
	if (div >= num)
	{
		return (1);
	}
	if ((num % div) == 0)
	{
		return (0);
	}
	return (buscard(num, div + 1));

}

/**
* is_prime_number - retorna la raiz de n
* @n: numero
* Return: la raiz de n.
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (buscard(n, 2));
	}
}
