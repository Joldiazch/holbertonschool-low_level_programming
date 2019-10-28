#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
* printChar - print character.
* @c: character to print.
*/

void printChar(va_list c)
{
	printf("%c", (char)va_arg(c, int));
}

/**
* printInt - print integer.
* @c: integer to print.
*/

void printInt(va_list c)
{
	printf("%d", va_arg(c, int));
}
/**
* printFloat - print float
* @c: float to print.
*/

void printFloat(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
* printStr - print string.
* @c: string to print.
*/

void printStr(va_list c)
{
	char *s;

	s = va_arg(c, char *);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
* print_all - print all format c, i, f, s.
* @format: input format to print.
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
	int i = 0, j = 0, k = 0;

	va_start(str, format);
	while (format[i])
	{
		switch (k)
		{
			case 1:
				printf(", ");
		}
		k = 0;
		while ((ops[j]).op)
		{
			if (*(ops[j]).op == format[i])
			{
				k = 1;
				(ops[j]).f(str);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(str);
	printf("\n");
}
