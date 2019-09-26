#include "holberton.h"

/**
* print_square - print a square of lengeth size..
* @size: lenget of line
*
* Return: void.
*
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
