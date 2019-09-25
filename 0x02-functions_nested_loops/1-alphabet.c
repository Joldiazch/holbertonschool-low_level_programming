#include "holberton.h"

/**
* print_alphabet - print de alphabet
*
*
* Return: 0.
*
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
