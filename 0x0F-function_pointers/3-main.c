#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* int_index - searches for an integer..
* @array: parray whit elemets.
* @size: size of arrays
* @cmp: funtion que toma a cada elemento de array
* Return: void
*/

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		printf("ERROR");
	}
	if ((argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%') && (strlen(argv[2]) == 1))
	{
		if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[2][0] == '0'))
		{
			printf("Error\n");
			exit(99);
		}

	}
	else
	{
		printf("ERROR");
	}
	(get_op_func(argv[2][0]))(atoi(argv[1][0]), atoi(argv[3][0]));
	return (0);
}
