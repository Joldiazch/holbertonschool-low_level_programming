#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of
*	 coins to make change for an amount of money.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int i, k, sum = 0;
	int m[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		k = atoi(*(argv + 1));
		(k < 0) ? (k = 0) : (k = k);
		for (i = 0; i < 5; i++)
		{
			sum += k / m[i];
			k %= m[i];
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
