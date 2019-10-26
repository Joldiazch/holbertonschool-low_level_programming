#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - returns the sum of all its parameters
* @n: strero de streros ingresados.
* @separator: strero de streros ingresados.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i;

	if (!separator)
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(str, char *);
			printf("%s", (!s) ? ("(nil)") : (s));
		}
		printf("\n");
		va_end(str);
	}
	else
	{
		va_start(str, n);
		s = va_arg(str, char *);
		printf("%s", (!s) ? ("(nil)") : (s));
		for (i = 1; i < n - 1; i++)
		{
			s = va_arg(str, char *);
			printf("%s%s", separator, (!s) ? ("(nil)") : (s));
		}
		if (n)
		{
			s = va_arg(str, char *);
			printf("%s", (!s) ? ("(nil)") : (s));
			printf("\n");
			va_end(str);
		}
	}
}
