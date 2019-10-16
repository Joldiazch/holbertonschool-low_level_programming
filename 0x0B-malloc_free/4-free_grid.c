#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - creates an array of chars.
 * @grid: the size of the memory to print
 * @height: character
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
