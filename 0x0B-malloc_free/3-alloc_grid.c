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
grid = (int **)malloc(width * sizeof(int));
for (i = 0 ; i < width ; i++)
{
grid[i] = (int *)malloc(height * sizeof(int));
};
if (grid == NULL)
return (NULL);
for (i = 0 ; i < width ; i++)
{
for (j = 0 ; j < height ; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
