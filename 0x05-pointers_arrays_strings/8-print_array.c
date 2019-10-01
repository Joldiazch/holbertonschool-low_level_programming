#include "holberton.h"
#include <stdio.h>

/**
* print_array - imprime la mitad de la cadena a la que apunta *s
* @a: pointer of  integer
* @n: integer n
* Return: Void.
*
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
