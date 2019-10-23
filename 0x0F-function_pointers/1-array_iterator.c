#include <stdlib.h>
/**
* array_iterator - executes a function given as a parameter.
* @array: parray whit elemets.
* @size: size of arrays
* @action: funtion que toma a cada elemento de array
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
