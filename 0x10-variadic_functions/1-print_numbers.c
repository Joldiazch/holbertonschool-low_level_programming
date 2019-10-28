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

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
