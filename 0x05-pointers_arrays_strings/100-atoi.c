#include "holberton.h"

/**
* _atoi - copies pointed src, to the pointed to by dest.
* _pow - multtiplica b por si misma e veces..
* @s: pointer to paste
* Return: Void.
*
*/
int _atoi(char *s)
{
	int i = 0, cont = 0, cont2 = 0, j, cont3 = 0, k, n;

	while (!(*(s + i) >= 48 && *(s + i) <= 57) && *(s + i) != '0')
	{
		if (*(s + i) == '-')
		{
			cont++;
		}
		i++;
	}
	j = i;
	while ((*(s + j) >= 48 && *(s + j) <= 57) && *(s + j) != '0')
	{
		cont2++;
	}
	if (cont2 == 0)
	{
		return (0);
	}
	for (k = i; k < (i + cont2); k++)
	{
		n += ((*(s + k)) * (_pow(10, (cont2 - cont3))));
		cont3++;
	}
	if ((cont % 2) == 0)
	{
		return (n);
	}
	return (n * (-1));
}

int _pow(int b, int e)
{
	int number = 1;
	int i;

	for (i = 1; i <= e; i++)
	{
		number *= b;
	}
	return (number);
}
