#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - Returns a pointer to a two dimensional array of
*integers with each element initialized to zer0
*@width:  the width of the two dimensional array
*@height: the height of the two dimensional array
*Return:pointer to the two dimensional array else NULL
*/

int **alloc_grid(int width, int height)
{
int **twod;

int height_index, width_index;

if (width <= 0 || height <= 0)
return (NULL);
twod = malloc(sizeof(int *) * height);

if (twod == NULL)
return (NULL);

for (height_index = 0 ; height_index < height ; height_index++)
{
twod[height_index] = malloc(sizeof(int) * width);
if (twod[height_index] == NULL)
{
for (; height_index >= 0 ; height_index--)
free(twod[height_index]);

free(twod);
return (NULL);
}

}
for (height_index = 0 ; height_index < height ; height_index++)
{
for (width_index = 0 ; width_index < width ; width_index++)
twod[height_index][width_index] = 0;

}

return (twod);
}
