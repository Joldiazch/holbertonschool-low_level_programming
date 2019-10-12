#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -  program adds positive numbers.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (**(argv + i) >= 48 && **(argv + i) <= 57)
		{
			sum += atoi(*(argv + i));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
