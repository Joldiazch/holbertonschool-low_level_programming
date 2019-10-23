#include <stdlib.h>
/**
* int_index - searches for an integer..
* @array: parray whit elemets.
* @size: size of arrays
* @cmp: funtion que toma a cada elemento de array
* Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
