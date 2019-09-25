#include "holberton.h"

/**
* print_alphabet_x10 - print de alphabet for 10
*
*
* Return: void
*
*/
void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
	}
}
