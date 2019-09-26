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

	for (i = 0; i < 10; i++)
	{
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
			else
			{
				_putchar('0' + c);
			}
			c++;
		}
	c = 0;
	_putchar('\n');
	}
}
