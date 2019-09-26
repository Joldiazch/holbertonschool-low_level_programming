#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - prints all natural number from n to 98
  * @n: parameter to reach number 98
  *
  */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
