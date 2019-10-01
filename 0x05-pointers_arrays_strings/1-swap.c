#include "holberton.h"

/**
* swap_int - intercambia el valor de dos variables..
* @a: integer variable
* @b: integer variable
* Return: void.
*
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
