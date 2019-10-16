#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates an array of chars.
 * @width: width the array
 * @height: height the array
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int i, j, fil = height, col = width;
	int **arr;

	if ((fil <= 0) || (col <= 0))
	{
		return (NULL);
	}
	arr = malloc(fil * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < fil; i++)
	{
		arr[i] = (int *)malloc(col * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < fil; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
