#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -  program that prints all arguments it receives.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int re;

		re = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", re);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
