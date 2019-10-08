#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - print chess board
* @a: array content nombre fichas de ajedrez
* @size: tamaño de la matriz
* Return: void.
*/
void print_diagsums(int *a, int size)
{
	int i, fil = 0, col = 0, sum = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (col == size)
		{
			fil++;
			col = 0;
		}
		if (col == fil)
		{
			sum += *(a + i);
		}
		if ((fil + col) == (size - 1))
		{
			sum2 += *(a + i);
		}
		col++;
	}
	printf("%d, %d\n", sum, sum2);
}
