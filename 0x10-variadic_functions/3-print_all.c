#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
* print_strings - returns the sum of all its parameters
* @n: strero de streros ingresados.
*/

void printChar(va_list c)
{
	printf("%c", (char)va_arg(c, int));
}

/**
* print_int - returns the sum of all its parameters
* @n: strero de streros ingresados.
*/

void printInt(va_list c)
{
	printf("%d", va_arg(c, int));
}
/**
* print_int - returns the sum of all its parameters
* @n: strero de streros ingresados.
*/

void printFloat(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
* print_int - returns the sum of all its parameters
* @n: strero de streros ingresados.
*/

void printStr(va_list c)
{
	printf("%s", va_arg(c, char *));
}

/**
* print_strings - returns the sum of all its parameters
* @n: strero de streros ingresados.
* @separator: strero de streros ingresados.
*/

void print_all(const char * const format, ...)
{
	va_list str;
	
	op_t ops[] = {
        {"c", printChar},
        {"i", printInt},
        {"f", printFloat},
        {"s", printStr},
        {NULL, NULL}
    };
    int i = 0, j = 0;
	va_start(str, format);
	while (format[i])
	{
		while ((ops[j]).op)
		{
			if (*(ops[j]).op == format[i])
			{
				(ops[j]).f(str);
				if (format[i + 1])
				{
					printf(", ");
				}
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(str);
}