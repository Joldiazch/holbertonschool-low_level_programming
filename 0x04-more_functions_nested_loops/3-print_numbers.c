#include "holberton.h"

/**
* print_numbers - print numbers od 0 to 9.
*
*
* Return: void.
*
*/
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
