#include "fuction_pointers.h"

/*
*int_index - a function that finds an integer
*@array: where to search from
*@size: Number of elements in the array
*@cmp:function to the pointer used to compare
*Return: pointer to index cmp first element
*       else -1
*/
 
int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array == NULL || cmp == NULL)
return (-1);

for (index = 0 ; index < size ; index++)
{
	if (cmp(array[index]) != 0)
	return (index);
}
return (-1);
}
