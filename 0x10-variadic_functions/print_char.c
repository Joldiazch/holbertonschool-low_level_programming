#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - returns the sum of all its parameters
* @n: strero de streros ingresados.
*/

void printChar(va_list c)
{
	printf("%c", va_arg(c, char));
}