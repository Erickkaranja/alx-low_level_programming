#include "function_pointers.h"

/**
*array_iterator - a function that finds an integer
*@array: where to search from
*@size: Number of elements in the array
*@action:function to the pointer used to compare
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}
}
