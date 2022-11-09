#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees a two dimendional arrray created previously
*by alloc_grid
*@grid: the created two dimensional array
*@height: The height of the grid
*/
void free_grid(int **grid, int height)
{
int index;

for (index = 0 ; index < height ; index++)
free(grid[index]);

free(grid);
}
