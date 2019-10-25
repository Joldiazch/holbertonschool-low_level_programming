#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: numero de numeros ingresados.
* Return: integer result
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int resul = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		resul += va_arg(num, int);
	}
	va_end(num);
	return (resul);
}
