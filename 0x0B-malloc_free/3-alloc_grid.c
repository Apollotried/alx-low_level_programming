#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry
 * @width: rows
 * @height: cols
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;

if (width == 0 || height == 0)
{
return (NULL);
};
grid = (int **)malloc(height * sizeof(int *));
if (grids == NULL)
{
	return (NULL);
};

for (i = 0 ; i < height ; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
	for (j = 0 ; j < i ; j++)
		free(grid[j]);
	free(grid);
	return (NULL);
};
};
if (grid == NULL)
return (NULL);
for (i = 0 ; i < height ; i++)
{
for (j = 0 ; j < width ; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
