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
	int i, k = 0, sum;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][k])
		{
			if (!(argv[i][k] >= 48 && argv[i][k] <= 57))
			{
				printf("Error\n");
				return (1);
			}
			k++;
		}
		sum += atoi(*(argv + i));
	}
	printf("%d\n", sum);
	return (0);
}
