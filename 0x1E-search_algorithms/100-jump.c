#include "search_algos.h"

/**
* jump_search - function that searches for a value in an array
* @array: array of integer
* @size: size of array of integer
* @value: value to serch
* Return: index of match or -1 other case
*/

int jump_search(int *array, size_t size, int value)
{
	size_t idx;
	int step = sqrt(size);

	for (idx = 0; idx < size && array; idx += step)
	{
		printf("Value checked array[%zu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		else if (array[idx + step] >= value && step != 1)
		{
			printf("Value found between indexes [%zu] and [%zu]\n", idx, idx + step);
			step = 1;
		}
	}
	return (-1);
}
