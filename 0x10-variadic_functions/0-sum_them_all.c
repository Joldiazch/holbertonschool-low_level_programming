#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: numero de numeros ingresados.
* Return: integer result
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list num;
		unsigned int i, resul = 0;

		va_start(num, n);
		for (i = 0; i < n; i++)
		{
			resul += va_arg(num, unsigned int);
		}
		va_end(num);
		return (resul);
	}
	return (0);
}
