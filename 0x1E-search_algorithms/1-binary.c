#include "search_algos.h"

/**
* search - function that searches for a value in an array
* @array: array of integer
* @start: start range for search
* @end: end range for search
* @value: value to serch
* Return: index of match or -1 other case
*/
int search(int *array, int start, int end, int value)
{
	int half = (end - start) / 2, i;

	if (!array || end < start)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);

	if (value == array[start + half])
		return (start + half);
	else if (value > array[start + half])
		return (search(array, start + half + 1, end, value));
	else
		return (search(array, start, half - 1, value));
}

/**
* binary_search - function that searches for a value in an array
* @array: array of integer
* @size: size of array of integer
* @value: value to serch
* Return: index of match or -1 other case
*/
int binary_search(int *array, size_t size, int value)
{
	return (search(array, 0, size - 1, value));
}
