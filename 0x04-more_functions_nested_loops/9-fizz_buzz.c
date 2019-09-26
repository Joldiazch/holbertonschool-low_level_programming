#include "holberton.h"
#include <stdio.h>
/**
* main - print a square of lengeth size..
*
* Return: 0.
*
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else if (((i % 3) == 0))
			{
				printf("Fizz");
				printf(" ");

			}
			else if (((i % 5) == 0))
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				printf("%d", i);
				printf(" ");
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
