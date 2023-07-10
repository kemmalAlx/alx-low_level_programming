#include"main.h"

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int w = -1, h = -1;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * (width));
	if (!grid)
		return (NULL);
	while (++w < width)
		grid[w] = malloc(sizeof(int) * (height));
	w = -1;
	while (++w < width)
	{
		h = -1;
		while (++h < height)
			grid[w][h] = 0;
	}
	return (grid);
}
