#include "holberton.h"

/**
* print_number - print an integer number..
* @n: integer number to print
*
* Return: cero.
*
*/
void print_number(int n)
{
	int i;
	int j;
	int num = n;
	int c = 0;
	int k = n;

	if (n >= 0)
	{
		while (num)
		{
			num /= 10;
			c++;
		}
		for (j = 1; j < c; j++)
		{
			k = n;
			for (i = 1; i <= (c - j); i++)
			{
				k /= 10;
			}
			_putchar('0' + (k % 10));
		}
		_putchar('0' + (n % 10));
	}
	else
	{
		n *= -1;
		_putchar('-');
		print_number(n);
	}
}
