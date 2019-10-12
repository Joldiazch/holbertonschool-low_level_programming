#include "holberton.h"

void print_alphabet_x10(void)
{
	int i;
	char l = 'a';

	for (i = 0; i <= 9; i++)
	{
		while(l <= 'z')
		{
			_putchar(l);
			l++;
		}
		l = 'a';
		_putchar('\n');
	}
}
