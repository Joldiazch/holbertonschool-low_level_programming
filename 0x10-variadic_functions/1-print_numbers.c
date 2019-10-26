#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - returns the sum of all its parameters
* @n: numero de numeros ingresados.
* @separator: numero de numeros ingresados.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (!separator)
	{
		printf("\n");
	}
	else
	{
		va_start(num, n);
		printf("%d", va_arg(num, int));
		for (i = 1; i < n; i++)
		{
			printf("%s%d", separator, va_arg(num, int));
		}
		printf("\n");
		va_end(num);
	}
}
