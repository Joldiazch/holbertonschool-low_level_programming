#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* main - return the resultado the operation..
* @argv: array of arrays whit input of operation.
* @argc: size of argv
* Return: integer result
*/

int main(int argc, char **argv)
{
	int (*resul)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' ||
	argv[2][0] == '/' || argv[2][0] == '%') && (strlen(argv[2]) == 1))
	{
		if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
		{
			printf("Error\n");
			exit(100);
		}

		resul = get_op_func(argv[2]);
		printf("%d\n", resul(atoi(argv[1]), atoi(argv[3])));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
