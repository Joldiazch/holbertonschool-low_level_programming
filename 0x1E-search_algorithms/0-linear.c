#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array
* @array: array of integer
* @size: size of array of integer
* @value: value to serch
* Return: index of match or -1 other case
*/

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array)
	{
		for (idx = 0; idx < size; idx++)
		{
			printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
			if (array[idx] == value)
				return (idx);
		}
	}
	return (-1);
}
