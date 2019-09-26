#include "holberton.h"

/**
* more_numbers - print numbers od 0 to 14 for 10.
*
*
* Return: void.
*
*/
void more_numbers(void)
{
	int c = 0;
	int i;
	int k;

	for (i = 0; i < 10; i++)
	{
		while (c <= 14)
		{
			if (c <= 9)
			{
				k = c;
			}
			else
			{
				k = c;
				_putchar('0' + (k / 10));
			}
			_putchar('0' + (k % 10));
			c++;
		}
	c = 0;
	_putchar('\n');
	}
}
