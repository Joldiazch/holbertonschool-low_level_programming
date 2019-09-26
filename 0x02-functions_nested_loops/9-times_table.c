#include "holberton.h"
/**
* times_table - imprime la tabla de 0 al 9
*
*
* Return: void
*
*/
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = j * i;
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}
