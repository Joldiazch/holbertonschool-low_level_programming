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

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
