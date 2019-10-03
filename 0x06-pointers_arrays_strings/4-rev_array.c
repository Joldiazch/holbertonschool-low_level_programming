#include "holberton.h"

/**
* reverse_array - copies the first n characters of the *src to dest
* @a: destino
* @n: entrada
* Return: void.
*/
void reverse_array(int *a, int n)
{
	int i = (n - 1), k = (n / 2);
	int p = 0, p2 = 0, c = 0;

	while (i >= k)
	{
		p = *(a + c);
		p2 = *(a + i);
		*(a + i) = p;
		*(a + c) = p2;
		i--;
		c++;
	}
}
