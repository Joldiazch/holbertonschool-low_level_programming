#include "holberton.h"
#include <stdio.h>
/**
* main - prints its name, followed by a new line.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
* Return: Always 0.
*/
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}
